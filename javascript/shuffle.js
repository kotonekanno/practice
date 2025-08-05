var cards,str,a,b,c,cards_a,cards_c,i,j;

cards=['A','B','C','D','E'];

for(j=1;j<=10;j++){
	a=Math.floor(Math.random()*5);    //aは1~4のランダムな整数
	b=Math.floor(Math.random()*4);
	if(a+b<=4){
    	c=a+b;
	}else{
	    c=a+b-5;
	}                                 //cは1~4のランダムな整数
	
	cards_a=cards[a];
	cards_c=cards[c];
	cards[a]=cards_c;
	cards[c]=cards_a;
}

showAll();

function showAll(){
	str='';
	for(i=1;i<=5;i++){         //i=1から5まで繰り返し
    	str=str+cards[i-1];    //cardsの(i-1)番目をstrに追加
		str=str+',';
	}
	alert(str);
}