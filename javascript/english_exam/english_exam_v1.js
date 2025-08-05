var eng=['function','variable','loop','condition','array'];
var jpn=['関数','変数','繰り返し','条件','配列'];
var x=['','','','',''];
var tmp_in,i,j,a,b,jpn_a,jpn_b,eng_a,eng_b,score,str;

doShuffle();
score=0;
for(i=0;i<=jpn.length-1;i++){
	tmp_in=prompt('英語で「'+jpn[i]+'」は？');
	if(tmp_in===eng[i]){
	    alert('正解');
        score=score+1;
    }else{
    	alert('不正解');
        x[i]=eng[i];
    }
}

alineAll();

if(score==5){
    alert('素晴らしい。満点です。');
}else{
	alert(score+'点でした。間違えた単語は'+str+'です。');
}

function alineAll(){
    str='';
    for(l=0;l<=x.length-1;l++){
		if(x[l]!==''){
            if(l==x.length-1){
                str=str+eng[l];
            }else{
                str=str+eng[l]+'と';
            }
        }
    }
}

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
