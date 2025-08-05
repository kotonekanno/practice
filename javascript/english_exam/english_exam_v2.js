#点数ごとにコメントを表示

var eng=['function','variable','loop','condition','array'];
var jpn=['関数','変数','繰り返し','条件','配列'];
var tmp_in,i,j,a,b,jpn_a,jpn_b,score,str;

doShuffle();
score=0;
for(i=0;i<=jpn.length-1;i++){
	tmp_in=prompt('英語で「'+jpn[i]+'」は？');
	if(tmp_in===eng[i]){
	    alert('正解');
        score=score+1;
	}else{
    	alert('不正解');
	}
}

str="";
str=score+'点でした。';
if(score===jpn.length){
    str=str+'素晴らしい。';
}else if(score>=4){
    str=str+'あと一歩！';
}else if(score==3){
    str=str+'もうちょっと頑張ろう！';
}else if(score==2){
    str=str+'もう一度勉強してみよう！';
}else if(score==1){
    str=str+'はじめから見直そう！';
}else if(score==0){
    str=str+'がんばれ！';
}

alert(str);

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
