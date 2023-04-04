//Cemal Muhammet Özdeniz 21219048
//Ceyda Yýldýz 21219020
//Þirin Büþra Gençol 21219034
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
//gribe iyi gelebilecek 4 takviye önerisi 
void grip_takviye() {
	printf("\n");
	printf("Gribe yakalanmamak icin 4 takviye\n\n\n");
	printf("***Redoxon C vitamini Cinko***\n\n");
	printf("***Natures Supreme Vitamin B-Complex***\n\n");
	printf("***Solgar VM 2000 60 Tablet***\n\n");
	printf("***Pharmaton***\n\n");
}
//gribe iyi gelebilecek cay onerileri
void grip_cay() {
	printf("\n");
	printf("Gribe iyi gelen caylar\n\n\n\n");
	printf("***Ihlamur***\n\n");
	printf(" Halsizlik, uykusuzluk, ekrem agrilari gibi sorunlarin giderilmesi icin; tencerenin icerisine 2 tutam ihlamur ekleyin.\n Uzerine elma ve limon dilimleri ilave edin. Karisima 3 su bardagi su ekledikten sonra kisik ateste kaynatin.\n Servis ederken birkac damla limon damlatin.\n\n\n");
	printf("***Zerdecal***\n\n");
	printf(" Bir tatli kasigi zerdecal tozu, limon suyu ve bir cay kasigi zencefili bir kabin icerisine koyun.\n 3 bardak suyu kaynattiktan sonra karisimin icerisine dokun ve karistirin.\n 5 dakika dinlendirdikten sonra servis edebilirsiniz.\n\n\n");
	printf("***Ada cayi***\n\n");
	printf(" Birkac tutam adacayini kap icerisine koyun. Uzerine 2-3 bardak su ve bir adet cubuk tarcin ekleyip kaynatin.\n Hazirladiginiz karisimi suzdukten sonra bardaga alin ve icerisine limon ekleyin.\n\n\n");
	printf("***Papatya cayi***\n\n");
	printf(" 3 dal papatya, 3 bardak su ve bir adet lavantayi kabin icerisine ekleyin ve kaynatmaya baslayin.\n Hazirladiginiz karisimi suzun ve bardaga alin.\n Uzerine 1 corba kasigi limon suyu ve 1 tatli kasigi bal ekleyip karistirin. \n\n\n ");
}
//covid riskini ölçen mini test
void covid_test() {
	int n1, n2, n3, n4, toplamn;
	printf("\n");
	printf("Lutfen asagidaki sorularin yanindaki degeri giriniz \n\n\n");

	printf("Bugun kendinizi nasil hissediyorunuz \n\n");
	printf("1-Iyiyim\n");
	printf("2-Kendimi halsiz ve hasta hissediyorum\n");
	printf("\n");
	scanf_s("%d", &n1);
	if (n1 == 1)
		n1 = 0;
	else if (n1 == 2)
		n1 = 1;
	else
		printf("Lutfen gecerli bir deger giriniz");

	printf("Kas ve eklem agrisi  \n\n");
	printf("1-Var\n");
	printf("2-Yok\n");
	printf("\n");
	scanf_s("%d", &n2);
	if (n2 == 1)
		n2 = 1;
	else if (n2 == 2)
		n2 = 0;
	else
		printf("Lutfen gecerli bir deger giriniz");

	printf("Tat ve koku kaybi\n\n");
	printf("1-Var\n");
	printf("2-Yok\n");
	printf("\n");
	scanf_s("%d", &n3);
	if (n3 == 1)
		n3 = 1;
	else if (n3 == 2)
		n3 = 0;
	else
		printf("Lutfen gecerli bir deger giriniz");

	printf("Kirmizi sis gozler\n\n");
	printf("1-Var\n");
	printf("2-Yok\n");
	printf("\n");
	scanf_s("%d", &n4);
	if (n4 == 1)
		n4 = 1;
	else if (n4 == 2)
		n4 = 0;
	else
		printf("Lutfen gecerli bir deger giriniz");

	toplamn = n1 + n2 + n3 + n4;
	if (toplamn == 1)
		printf("Corona icin dusuk seviye risk tasiyorsunuz . en yakin saglik birimine gidip test yaptirabilirsiniz ayrica ana menuden grip menusune girmeyi unutmayin");
	else if (toplamn == 0)
		printf("Corona icin risk tasimiyorsunuz saglicakla kaliniz");

	else
		printf("Corona icin yuksek seviye risk tasiyorsunuz . en yakin saglik birimine gidip test yaptirin ve kendinizi izole edin");
}
//gribe iyi gelecek yemek önerileri
void grip_yemek() {
	printf("\n");
	printf("Gribe iyi gelen yemekler\n\n\n\n");
	printf("***Sarimsak corbasi***\n\n");
	printf(" Dogal bir antioksidan kaynagi olan sarimsak, yemeklerin icerisinde tat vermek icin kullanilir.\n Mikroplarin giderilmesinde etkili bir rol oynadigi icin, kis aylarinda fazla tuketilmelidir.\n Gribi hafif bir sekilde atlatmak icin, bir veya iki porsiyon sarimsak corbasi tuketmeye ozen gosterin.\n\n\n");
	printf("***Tavuk suyu corbasi***\n\n");
	printf(" Hasta corbasi olarak bilinen tavuk suyu corbasi, yaklasik 30-35 dakika da hazirlanir.\n Istege gore havuc, patates, dereotu gibi besinlerle birlikte sunulabilir.\n Özellikle solunum yolu hastaliklarina iyi gelmesiyle bilinir.\n Bu nedenle haftada bir veya iki kez tuketilmesi onerilir.\n\n\n");
	printf("***Iskembe corbasi***\n\n");
	printf("Genellikle dana veya koyun iskembesinden hazirlanan bu corba, kis aylarinin vazgecilmezidir. Iceriginde fosfor, protein ve B12 vitamini barindirdigi için, kemik gelisimini destekler ve sinir hucrelerinin duzenli calismasini saglar. Bu nedenle haftada bir kez kahvalti veya aksam yemeklerinde tuketilmelidir. \n\n\n");
	printf("***Etli kereviz yemegi***\n\n");
	printf(" A ve K vitamini, potasyum, sodyum, demir gibi bircok minerali iceriginde barindiran kereviz,\n ozellikle Kasim-Subat aylari arasinda fazla tuketilir.\n Mide yanmasina iyi gelen bu besin, ayni zamanda iltihaplarin giderilmesini de saglar.\n Ozellikle enfeksiyonlu hastaliklarda haftada bir kez tuketilmelidir.\n\n\n");
}
//alkol baðýmlýlýðýný ölçen test
void alkol_test() {
	int y1, y2, y3, y4, y5, toplamy;
	printf("***Lutfen asagidaki sorularin yanindaki degeri giriniz***\n\n\n");

	printf("Son alti ay icinde ne siklikta alkol kullandiniz?\n\n");
	printf("1* Hic kullanmadim veya ayda 1-3 kereden fazla degil\n");
	printf("2* Haftada 1 - 5 kez\n");
	printf("3* Hemen hemen her gun\n");
	printf("\n");
	scanf_s("%d", &y1);
	if (y1 == 1)
		y1 = 0;
	else if (y1 == 2)
		y1 = 1;
	else if (y1 == 3)
		y1 = 2;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf("Son alti ay icinde, bir seferde (6 kadeh sarap veya 3 duble raki veya dört kutu buyuk bira) veya daha fazla icme sikliginiz ne kadardir?\n\n");
	printf("1* Hic veya ayda birden az\n");
	printf("2* Ayda 1-3 kez\n");
	printf("3* Haftada bir veya daha fazla\n");
	printf("\n");
	scanf_s("%d", &y2);
	if (y2 == 1)
		y2 = 0;
	else if (y2 == 2)
		y2 = 1;
	else if (y2 == 3)
		y2 = 2;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf("Gunduz saatlerinde de alkol kullandiginiz zamanlar oldu mu ? Ne siklikla ? \n\n");
	printf("1* Hicbir zaman\n");
	printf("2* Bazen\n");
	printf("3* Cok fazla\n");
	printf("\n");
	scanf_s("%d", &y3);
	if (y3 == 1)
		y3 = 0;
	else if (y3 == 2)
		y3 = 1;
	else if (y3 == 3)
		y3 = 2;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf("Aileniz veya cevreniz sizin cok fazla alkol kullandiginizdan endiseleniyor muydu? Ne siklikla?\n\n");
	printf("1* Hicbir zaman\n");
	printf("2* Bazen\n");
	printf("3* Cok fazla\n");
	printf("\n");
	scanf_s("%d", &y4);
	if (y4 == 1)
		y4 = 0;
	else if (y4 == 2)
		y4 = 1;
	else if (y4 == 3)
		y4 = 2;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf("Alkol kullandiginiz icin aile ziyaretleri, hobiler, sosyal iliskiler gibi hayatinizdaki baska etkinliklerden vazgectiginiz oldu mu?\n\n");
	printf("1* Hicbir zaman\n");
	printf("2* Bazen\n");
	printf("3* Cok fazla\n");
	printf("\n");
	scanf_s("%d", &y5);
	if (y5 == 1)
		y5 = 0;
	else if (y5 == 2)
		y5 = 1;
	else if (y5 == 3)
		y5 = 2;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	toplamy = y1 + y2 + y3 + y4 + y5;

	if (toplamy <= 3)
		printf("Alkol kullanim duzeyin cok yuksek risk tasiyan bir duzeyde degil. Ancak alkol kullaniminin her duzeyde saglik sorunlari yaratabildigini biliyoruz.\n");
	else
		printf("Alkol kullanimin yuksek risk duzeyinde. Bu duzeyde alkol kullaniminin bagimlilik olusturabilecegi bilinmektedir. Bu nedenle azaltmak veya birakmanin uygun olacagi belirtilmektedir.\n");
}
//sigara baðýmlýlýðýný ölçen test
void sigara_test() {
	int z1, z2, z3, z4, z5, toplamz;
	printf("***Lutfen asagidaki sorularin yanindaki degeri giriniz***\n\n\n");

	printf("Gunde kac adet sigara iciyorsunuz?\n\n");
	printf("1* 10 veya daha az\n");
	printf("2* 11-30\n");
	printf("3* 31 ve uzeri\n");
	printf("\n");
	scanf_s("%d", &z1);
	if (z1 == 1)
		z1 = 0;
	else if (z1 == 2)
		z1 = 1;
	else if (z1 == 3)
		z1 = 2;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf("Ilk sigaranizi uyandiktan ne kadar sure sonra icersiniz?\n\n");
	printf("1*  0-5 dakika sonra\n");
	printf("2* 6-60 dakika sonra\n");
	printf("3*  60 dakikadan sonra\n");
	printf("\n");
	scanf_s("%d", &z2);
	if (z2 == 1)
		z2 = 2;
	else if (z2 == 2)
		z2 = 1;
	else if (z2 == 3)
		z2 = 0;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf("Sigara icmenin yasak oldugu (hastane, sinema,  gibi) yerlerde, bu yasaga uymakta zorlaniyor musunuz?\n\n");
	printf("1* Evet\n");
	printf("2* Hayir\n");
	printf("\n");
	scanf_s("%d", &z3);
	if (z3 == 1)
		z3 = 1;
	else if (z3 == 2)
		z3 = 0;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf("4. Sabah saatlerinde, gunun diger saatlerine gore daha cok sigara icer misiniz?\n\n");
	printf("1* Evet\n");
	printf("2* Hayir\n");
	printf("\n");
	scanf_s("%d", &z4);

	if (z4 == 1)
		z4 = 1;
	else if (z4 == 2)
		z4 = 0;
	else
		printf("Lutfen gecerli bir deger giriniz\n");

	printf(" Cok hasta olsaniz bile sigara icer misiniz?\n\n");
	printf("1* Evet\n");
	printf("2* Hayir\n");
	printf("\n");
	scanf_s("%d", &z5);
	if (z5 == 1)
		z5 = 1;
	else if (z5 == 2)
		z5 = 0;

	else
		printf("Lutfen gecerli bir deger giriniz\n");

	toplamz = z1 + z2 + z3 + z4 + z5;

	if (toplamz <= 3)
		printf(" Sigara kullanim duzeyiniz cok yuksek risk tasiyan bir duzeyde degil. Ancak sigara kullaniminin her duzeyde saglik sorunlari yaratabildigini biliyoruz.\n");
	else if (toplamz <= 4)
		printf("Sigara kullanininiz orta duzeyde. Bu duzeyde sigara kullaniminin bagimlilik olusturabilecegi bilinmektedir. Bu nedenle azaltmak veya birakmanin uygun olacagi belirtilmektedir.\n");
	else
		printf("Sigara kullaniminiz yuksek risk duzeyinde. Bu duzeyde sigara kullanimi bagimli oldugunuzu gostermektedir. Bu nedenle azaltmak veya birakmanin uygun olacagi belirtilmektedir.\n");

}
//vücut kitle endeksini hesaplayan program (boyu metre cinsinden girdirin)
void vucut_kitle() {
	float boy;
	int kilo, vke;

	printf("Boyunuzu giriniz (ornegin 1.90) :");
	scanf_s("%f", &boy);
	printf("kilonuzu giriniz :");
	scanf_s("%d", &kilo);

	vke = kilo / (boy * boy);
	if (vke < 18)
		printf("Durumunuz = Zayif \n");
	else if (vke < 25)
		printf(" Durumunuz = Normal \n");
	else if (vke < 30)
		printf("Durumunuz = Hafif Sisman \n");
	else if (vke < 35)
		printf("Durumunuz = Sisman \n");
	else
		printf("Durumunuz = Obez \n");

}
//günlük kalori ihtiyacýný hesaplayan program (boyu santimetre cinsinden girdirin)
void gunluk_kolori() {
	int kilo, yas, fbmh, secim1, secim2, boy;

	printf("Boyunuzu giriniz (ornegin 190) ");
	scanf_s("%d", &boy);
	printf("Kilonuzu giriniz ");
	scanf_s("%d", &kilo);
	printf("Yasinizi giriniz ");
	scanf_s("%d", &yas);

	printf("lutfen cinsiyetinizin yanindaki degeri giriniz \n 1-Kadin \n 2-Erkek \n ");
	scanf_s("%d", &secim1);
	if (secim1 == 1)
		fbmh = 655.1 + (9.56 * kilo) + (1.85 * boy) - (4.67 * yas);
	else if (secim1 == 2)
		fbmh = 66.5 + (13.75 * kilo) + (5 * boy) - (6.77 * yas);
	else
		printf("lutfen gecerli bir deger giriniz");

	printf("Lutfen gun ici haraket duzeyinizin yanindaki degeri giriniz \n 1-Masa basi ve duragan bir yasaminiz varsa \n 2-Hafif duzeyde hareketliyseniz \n");
	printf(" 3-Orta duzeyde hareketli olup cok oturmuyorsaniz \n 4-Yuksek duzeyde aktifseniz ve duzenli spor yapiyorsaniz");
	scanf_s("%d", &secim2);
	if (secim2 == 1) {
		fbmh = 1.2 * fbmh;
		printf("Gunluk kalori ihtiyaciniz %d kcal/gun\n", fbmh);
	}
	else if (secim2 == 2) {
		fbmh = 1.3 * fbmh;
		printf("Gunluk kalori ihtiyaciniz %d kcal/gun\n", fbmh);
	}
	else if (secim2 == 3) {
		fbmh = 1.4 * fbmh;
		printf("Gunluk kalori ihtiyaciniz %d kcal/gun\n", fbmh);
	}
	else if (secim2 == 4) {
		fbmh = 1.4 * fbmh;
		printf("Gunluk kalori ihtiyaciniz %d kcal/gun\n", fbmh);
	}

}
//kolay kilo vermek için öneriler
void kilo_oneri() {
	printf("Hizli kilo vermek icin oneriler\n\n\n");
	printf("***Gec saatlerde yemek yemeyin.\n");
	printf("***Daha cok spor yapin, daha cok kalori yakin.\n");
	printf("***Daha cok su icin.\n");
	printf("***Saglikli yag kaynaklari tuketin.\n");
	printf("***Kilo vermek icin dogal, islenmemis gidalari tercih edin. \n");
	printf("***Yemekleri iyi cigneyerek tuketin. \n");
	printf("***Sekerli iceceklerden uzak durun. \n ");
}
//depresyondan kurtulmak için öneriler
void depresyondan_kurtulma() {
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("*Arkadas ve aile bireylerinizle aktif bir sekilde iletisim kurun\n");
	printf("*Umutsuzluga kapilmayin\n");
	printf("*Uzman doktorunuz veya psikoterapistinizle acik sekilde konusun\n");
	printf("*Gerekli oldugu sure boyunca tedavi olun\n");
	printf("*Uzman psikoterapistinizin tavsiyelerine uyun\n");
	printf("*Kucuk ve erisilebilir hedefler belirleyin\n");
	printf("*Uyandýktan sonra mumkun oldugunca cabuk kalkýn\n");
	printf("*Bedensel olarak aktif olun\n");
	printf("*Kisisel haftalik planinizi olusturun\n");
	printf("*Uzerinizdeki yuku hafifletin\n");
	printf("*Alkolden ve uyusturucudan uzak durun\n");
}
//depresyon durumunu hesaplayan test (hatayý belirt) 
void depresyon_test() {
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, toplamx;
	printf("*****Asagidaki formda verilen bilgilerden hissettiginiz durumun yanindaki degeri giriniz*****\n \n \n");

	printf("1-Kendimi uzgun hissetmiyorum.\n");
	printf("2-Kendimi uzgun hissediyorum. \n");
	printf("3-Oylesine uzgun ve mutsuzum ki, dayanamiyorum.\n\n");
	scanf_s("%d", &x1);
	if (x1 == 1)
		x1 = 0;
	else if (x1 == 2)
		x1 = 1;
	else if (x1 == 3)
		x1 = 2;
	else
		printf("lutfen geçerli bir deger giriniz");

	printf("1-Gelecek hakkinda umutsuz ve kararsiz degilim. \n");
	printf("2-Gelecek hakkinda karamsarim. \n");
	printf("3-Gelecegim hakkinda umutsuzum sanki hicbir sey duzelmiyecekmis gibi geliyor.\n\n");
	scanf_s("%d", &x2);
	if (x2 == 1)
		x2 = 0;
	else if (x2 == 2)
		x2 = 1;
	else if (x2 == 3)
		x2 = 2;
	else
		printf("lutfen gecerli bir deger giriniz\n");

	printf("1-Kendimi basarisiz gormuyorum.\n");
	printf("2-Geriye donup baktigimda, cok fazla basarisizligimin oldugunu goruyorum.\n");
	printf("3-Kendimi tumuyle basarisiz bir insan olarak goruyorum.\n\n");
	scanf_s("%d", &x3);
	if (x3 == 1)
		x3 = 0;
	else if (x3 == 2)
		x3 = 1;
	else if (x3 == 3)
		x3 = 2;
	else
		printf("lutfen gecerli bir deger giriniz");

	printf("1-Her zamankinden daha fazla agladigimi sanmiyorum.\n");
	printf("2-Su siralar her an agliyorum.\n");
	printf("3-Eskiden aglayabilirdim, ama su siralarda istesem de aglayamiyorum.\n\n");
	scanf_s("%d", &x4);
	if (x4 == 1)
		x4 = 0;
	else if (x4 == 2)
		x4 = 1;
	else if (x4 == 3)
		x4 = 2;
	else
		printf("lutfen gecerli bir deger giriniz");

	printf("1-Diger insanlara karsi ilgimi kaybetmedim.\n");
	printf("2-Eskisine gore insanlarla daha az ilgiliyim.\n");
	printf("3-Diger insanlara karsi hic ilgim kalmadi.\n\n");
	scanf_s("%d", &x5);
	if (x5 == 1)
		x5 = 0;
	else if (x5 == 2)
		x5 = 1;
	else if (x5 == 3)
		x5 = 2;
	else
		printf("lutfen gecerli bir deger giriniz");


	printf("1-Kararlarimi eskisi kadar kolay ve rahat verebiliyorum.\n");
	printf("2-Kararlarimi vermekte oldukca gucluk cekiyorum.\n");
	printf("3-Artik hic karar veremiyorum.\n\n");
	scanf_s("%d", &x6);
	if (x6 == 1)
		x6 = 0;
	else if (x6 == 2)
		x6 = 1;
	else if (x6 == 3)
		x6 = 2;
	else
		printf("lutfen gecerli bir deger giriniz");

	printf("1-Eskisi kadar iyi calisabiliyorum.\n");
	printf("2-Bir ise baslayabilmek icin eskisine gore kendimi daha fazla zorlamam gerekiyor.\n");
	printf("3-Hic bir is yapamiyorum.\n\n");
	scanf_s("%d", &x7);
	if (x7 == 1)
		x7 = 0;
	else if (x7 == 2)
		x7 = 1;
	else if (x7 == 3)
		x7 = 2;
	else
		printf("lutfen gecerli bir deger giriniz");

	printf("1-Eskisine kiyasla daha cabuk yoruldugumu sanmiyorum.\n");
	printf("2-Eskisinden daha cabuk yoruluyorum.\n");
	printf("3-Oyle yorgunum ki, hic bir sey yapamiyorum.\n\n");
	scanf_s("%d", &x8);
	if (x8 == 1)
		x8 = 0;
	else if (x8 == 2)
		x8 = 1;
	else if (x8 == 3)
		x8 = 2;
	else
		printf("lutfen gecerli bir deger giriniz");

	printf("1-Her zamankinden daha sinirli degilim.\n");
	printf("2-Cogu zaman sinirliyim.\n");
	printf("3-Eskiden sinirlendigim seylere bile artýk sinirlenemiyorum.\n\n");
	scanf_s("%d", &x9);
	if (x9 == 1)
		x9 = 0;
	else if (x9 == 2)
		x9 = 1;
	else if (x9 == 3)
		x9 = 2;
	else
		printf("lutfen gecerli bir deger giriniz");


	toplamx = x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9;

	if (toplamx > 9) {
		printf("lutfen bir ruh sagligi uzmanindan destek alin. Depresyon tedavisi olan bir durumdur!\n");

	}
	else if (toplamx > 4)
		printf("Lutfen biraz daha sakinlesin depresyona girmenize az kaldi\n");
	else
		printf("Ruh haliniz gayet yerinde korumaya devam edin. HAYATINIZDAN KEYIF ALIN \n");

}
int choose1 = 0;
int choose2;
void cikis() {
	choose2 = 0;
}
int main() {
	printf("*.*.*.*.*.*.*.*0T0-CURE*.*.*.*.*.*.*.*\n");
	printf("*.*SAGLIK OTOMASYONU GIRIS EKRANI*.*\n");
	time_t t;
	time(&t);
	long long  tc;
	printf("Lutfen hasta kaydi icin 11 haneli tc kimlik no giriniz :\n");
	printf("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\n");
	scanf_s("%lld", &tc);
	if (10000000000 > tc || tc > 99999999999)
		printf("lutfen gecerli bir tc giriniz");
	else
		do {
			printf("\n");
			printf("---------------------------------------------------\n");
			printf("\n");
			printf("*.*.*.*.*0T0-CURE*.*.*.*.*\n");
			printf("SAGLIK OTOMASYONU ANA MENU\n");

			printf("1.Covid\n");
			printf("2.Grip\n");
			printf("3.Alkol sigara sorunlari\n");
			printf("4.Kilo sorunlari\n");
			printf("5.Depresyon\n");
			printf("Tamamen cikmak icin lutfen 0 basiniz\n");
			printf("Yapmak istediginiz islemi seciniz:\n\n");
			scanf_s("%d", &choose1);
			switch (choose1) {
			case 1:
				printf("\n");
				printf("1.Covidmiyim ? testi \n");
				printf("2.Cikis\n");
				printf("Yapmak istediginiz islemi seciniz\n");
				printf("\n");
				scanf_s("%d", &choose2);
				if (choose2 == 1) {
					covid_test();
					FILE* dosya1;
					dosya1 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya1, "%lld , Covidmiyim ? testi yapildi , %s \n", tc, ctime(&t));
					fprintf(dosya1, "\n");

				}
				else if (choose2 == 2) {
					cikis();

				}
				choose2 = 0;
				break;
			case 2:
				printf("\n");
				printf("1.Gribe iyi gelen yemek onerileri\n");
				printf("2.Gribe iyi gelen cay onerileri\n");
				printf("3.Gribe yakalanmadan gecirebilmeniz icin takviye onerileri\n");
				printf("4.Cikis\n");
				printf("Yapmak istediginiz islemi seciniz\n");
				printf("\n");
				scanf_s("%d", &choose2);
				if (choose2 == 1) {
					grip_yemek();
					FILE* dosya2;
					dosya2 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya2, "%lld , Gribe iyi gelen yemek onerileri incelendi , %s \n", tc, ctime(&t));
					fprintf(dosya2, "\n");
				}
				else if (choose2 == 2) {
					grip_cay();
					FILE* dosya3;
					dosya3 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya3, "%lld , Gribe iyi gelen cay onerileri incelendi , %s \n", tc, ctime(&t));
					fprintf(dosya3, "\n");
				}
				else if (choose2 == 3) {
					grip_takviye();
		
					FILE* dosya4;
					dosya4 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya4, "%lld , Gribe yakalanmadan gecirebilmeniz icin takviye onerileri incelendi , %s \n", tc, ctime(&t));
					fprintf(dosya4, "\n");
				}
				else if (choose2 == 4) {
					cikis();
				}

				choose2 = 0;

				break;
			case 3:
				printf("\n");
				printf("1.Alkol bagimlilik testi\n");
				printf("2.Sigara bagimlilik testi\n");
				printf("3.Cikis\n");
				printf("Yapmak istediginiz islemi seciniz\n");
				printf("\n");
				scanf_s("%d", &choose2);
				if (choose2 == 1) {
					alkol_test();
					FILE* dosya5;
					dosya5 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya5, "%lld , Alkol bagimlilik testi yapildi , %s \n", tc, ctime(&t));
					fprintf(dosya5, "\n");
				}
				else if (choose2 == 2) {
					sigara_test();
					FILE* dosya6;
					dosya6 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya6, "%lld , Sigara bagimlilik testi yapildi , %s \n", tc, ctime(&t));
					fprintf(dosya6, "\n");
				}

				else if (choose2 == 3) {
					cikis();
				}

				choose2 = 0;
				break;

			case 4:
				printf("\n");
				printf("1.Boy kilo endeksi hesaplama\n");
				printf("2.Gunluk kalori ihtiyaci hesaplama\n");
				printf("3.Kilo vermek icin oneriler\n");
				printf("4.cikis\n");
				printf("Yapmak istediginiz islemi seciniz\n");
				printf("\n");
				scanf_s("%d", &choose2);
				if (choose2 == 1) {
					vucut_kitle();
					FILE* dosya7;
					dosya7 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya7, "%lld , Boy kilo endeksi hesaplandi , %s \n", tc, ctime(&t));
					fprintf(dosya7, "\n");
				}
				else if (choose2 == 2) {
					gunluk_kolori();
					FILE* dosya8;
					dosya8 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya8, "%lld , Gunluk kalori ihtiyaci hesaplandi , %s \n", tc, ctime(&t));
					fprintf(dosya8, "\n");
				}
				else if (choose2 == 3) {
					kilo_oneri();
					FILE* dosya11;
					dosya11 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya11, "%lld , Kilo vermek icin oneriler incelendi , %s \n", tc, ctime(&t));
					fprintf(dosya11, "\n");
				}
				else if (choose2 == 4)
					cikis();
				choose2 = 0;
				break;

			case 5:
				printf("\n");
				printf("***Depresyon*** \n");
				printf("1.Depresyondamisin ? testi\n");
				printf("2.Depresyondan kurtulma yollari\n");
				printf("3.Cikis\n");
				printf("Yapmak istediginiz islemi seciniz\n");
				printf("\n");
				scanf_s("%d", &choose2);
				if (choose2 == 1) {
					depresyon_test();
					FILE* dosya9;
					dosya9 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya9, "%lld , Depresyon testi yapildi ,  %s \n", tc, ctime(&t));
					fprintf(dosya9, "\n");
				}
				else if (choose2 == 2) {
					depresyondan_kurtulma();
					FILE* dosya10;
					dosya10 = fopen("C:\\Users\\cmlzd\\OneDrive\\Masaüstü\\hastakayit.txt", "a");
					fprintf(dosya10, "%lld , Depresyon kurtulma yollari incelendi , %s \n", tc, ctime(&t));
					fprintf(dosya10, "\n");
				}

				else if (choose2 == 3)
					cikis();
				choose2 = 0;
				break;

			default:

				break;
			}
		} while (choose1 != 0);
		
		choose1 = 0;

		return 0;
}
// Gelecekte uygulamaya gelebilecek güncellemeler:
// kayýt dosyasina yapýlan iþlem yerine iþlem sonucu yazýlacak.
// kayýt dosyasina ad soyad verisi girilebilir.
// hastalýk sayýsý ve iþlemleri arttýrýlacak

