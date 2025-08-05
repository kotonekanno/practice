#「hint」と入力することでヒントを表示

var eng=['function','variable','loop','condition','array'];
var jpn=['関数','変数','繰り返し','条件','配列'];
var tmp_in,i,j,a,b,jpn_a,jpn_b,score,hint;

doShuffle();
score=0;
for(i=0;i<=jpn.length-1;i++){
	tmp_in=prompt('英語で「'+jpn[i]+'」は？');
    if(tmp_in==='help'){
        hint=(eng[i]).split('');
        tmp_in=prompt('１文字目は'+hint[0]+'です。\n英語で「'+jpn[i]+'」は？');
    }
	if(tmp_in===eng[i]){
	    alert('正解');
        score=score+1;
	}else{
    	alert('不正解');
	}
}
alert(score+'点でした。');

function doShuffle(){
    for(j=1;j<=10;j++){
		a=Math.floor(Math.random()*jpn.length);
		b=Math.floor(Math.random()*jpn.length);
		jpn_a=jpn[a];
		jpn_b=jpn[b];
		jpn[a]=jpn_b;
		jpn[b]=jpn_a;
	    eng_a=eng[a];
    	eng_b=eng[b];
	    eng[a]=eng_b;
	    eng[b]=eng_a;
	}
}
