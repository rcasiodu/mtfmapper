/*
Copyright 2011 Frans van den Bergh. All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are
permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice, this list of
      conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice, this list
      of conditions and the following disclaimer in the documentation and/or other materials
      provided with the distribution.

THIS SOFTWARE IS PROVIDED BY Frans van den Bergh ''AS IS'' AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Frans van den Bergh OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those of the
authors and should not be interpreted as representing official policies, either expressed
or implied, of the Council for Scientific and Industrial Research (CSIR).
*/
#ifndef MTF_CORRECTION_COEFFS
#define MTF_CORRECTION_COEFFS

double mtf_correction_coeffs[37][9] = {
	{2, -0.0160032028204596, 1.27080886391170, -2.43022762937075, 12.8878457246794, -39.9676501144733, 72.5830092020032, -70.135925337633, 27.8351793688616},
	{3, -0.0168732557354331, 1.31142513932272, -3.12639888564405, 18.6802010086024, -65.6924891818898, 134.250042399209, -143.985238535660, 62.2472413808696},
	{4, -0.00333761283862883, 0.818635389933315, 3.63248199349762, -27.1181263095587, 102.387283557134, -204.533430150686, 206.816464735055, -83.0776076308495},
	{5, -0.0165259405541237, 1.28800640505336, -2.61243535162511, 13.9176465376236, -43.5354707528417, 80.1633922213989, -78.789192565415, 31.7841785740634},
	{6, -0.0158924697656748, 1.27667406685177, -2.63248974097936, 15.0855716975147, -50.7606486620936, 98.9947693959354, -101.728547216575, 42.5722815609492},
	{7, -0.0146892276452708, 1.22383758852886, -1.77413063646832, 8.42146040955716, -23.7175737572623, 40.6611732325223, -38.1552350663615, 14.9930967247369},
	{8, -0.0102276432187524, 1.06612892123764, 0.285854267778597, -4.72869992020176, 21.5645299080451, -45.2045633891140, 46.0041143066753, -18.1831957452571},
	{9, -0.0118422342363399, 1.11256597550043, -0.133061234922719, -3.40510649830081, 21.7587775987150, -54.2591167413221, 63.081339225678, -28.1580366731796},
	{10, -0.0211220434115417, 1.44444256104762, -4.56084405171991, 25.5231613067863, -79.8278595987058, 140.624970582791, -129.266097867418, 48.2771049812249},
	{11, -0.0211451548458317, 1.48901087903881, -5.97254384834991, 41.7397798824393, -166.670162114155, 371.743641969603, -423.278690552983, 191.299876454873},
	{12, -0.0107628715126105, 1.08067187234220, 0.171680655816076, -4.47885568281401, 22.2235169158338, -49.6518317005568, 54.5485756425421, -23.0873735945981},
	{13, -0.0113774900116865, 1.09459459214058, 0.109776708966582, -4.90370813566209, 25.9392206436644, -59.5421419112536, 67.0502648073478, -29.9136568652343},
	{14, -0.0226435941558861, 1.50941234865279, -5.56544742044224, 32.7783391900666, -106.952472894240, 195.721243790270, -184.864343674195, 70.2461400198808},
	{15, -0.0103316919132155, 1.06488132444985, 0.391701862915833, -6.24649563980634, 30.1773878664058, -69.2721402824606, 82.6310756091124, -39.9705800540984},
	{16, -0.0253030838737543, 1.62832311303462, -7.66257454920888, 51.5669046318195, -198.599100577562, 436.012546817923, -498.907147421657, 230.953377891135},
	{17, -0.0153141710803842, 1.24202995626186, -1.99822142775103, 10.2806492783492, -35.435410207692, 82.9153054895283, -105.440525214083, 54.6839140310478},
	{18, -0.0169504567665733, 1.32644743523917, -3.56885479088860, 24.0067498963245, -95.7284607452392, 218.992266566383, -258.468044044187, 121.627074759952},
	{19, -0.00415399901899847, 0.818390977288853, 4.11551388113617, -33.9005509994083, 140.279396641405, -306.91025778085, 345.841064907663, -155.997004187097},
	{26, -0.017685221909069, 1.26032345939050, -0.801424200807583, -11.9816384262244, 113.271209585531, -372.894371768022, 546.23121579548, -298.00994456913},
	{27, -0.0303233449170967, 1.82216772665198, -10.5539997266779, 73.3824315153996, -289.764330163238, 649.099332734283, -758.151323157047, 360.065177555646},
	{28, -0.0324932876557921, 1.89066781466016, -11.3037625952316, 76.8297639267478, -295.072318342315, 642.16960092878, -728.776046370439, 335.688623808886},
	{29, -0.0232816187379748, 1.52876284388921, -5.8058166329703, 34.5983561450791, -116.927028085215, 227.052251265137, -230.813800428587, 95.6983932987157},
	{30, -0.0070455687599743, 0.940173685520725, 2.17923107855387, -18.7466315419244, 76.145479444689, -158.229400472948, 166.373741913460, -69.0812961412225},
	{31, -0.0187145644856125, 1.39944950945603, -4.74278437708993, 33.3449455693635, -136.167780014714, 312.688244385447, -365.02669720349, 168.681278428745},
	{32, -0.0164549225740624, 1.29137676139420, -2.78971213141938, 15.9927018828816, -54.309490558125, 107.562428222909, -110.495167932014, 45.6927290027294},
	{33, 0.036924838146134, -0.915279517106976, 32.6233609475158, -272.20374109635, 1240.88820946530, -3128.82799379546, 4072.2611136974, -2117.40749872818},
	{34, -0.0125176447719784, 1.14782385090428, -0.792043969380817, 2.21890886988526, -2.60421401979456, 0.605356543809222, 2.03009495995466, -1.38130399993671},
	{35, -0.0114273981090163, 1.10970458487407, -0.300613832899203, -0.953599198629365, 8.57973109259406, -21.7298980300083, 25.9258601547709, -12.1948311938908},
	{36, -0.0135247568007376, 1.17873840586794, -1.16389935751991, 4.60864220629429, -12.1125782881453, 23.5713454900297, -27.9935924431063, 14.2501918865621},
	{37, -0.0149706142649822, 1.22510734610311, -1.69860347288824, 7.33415652374622, -18.013821801263, 26.2069429690365, -20.4085551316379, 6.54092704384995},
	{38, -0.0170794875323720, 1.31323636305296, -3.09373201016424, 18.0286650046987, -61.2047866982257, 119.802903585926, -123.290009331841, 51.5910416542876},
	{39, -0.0128656969831951, 1.16690653564784, -1.19303619715016, 5.84075993392864, -18.8337499541208, 38.595487997417, -42.3313190673809, 18.6777248709077},
	{40, -0.0084272719638294, 0.99169801350419, 1.4039217943299, -12.7711305250442, 51.7884966500671, -105.93109784613, 107.812049349962, -43.2731249673964},
	{41, -0.0103637639157595, 1.06396868005940, 0.390237746718180, -5.98958923361188, 27.8113132789067, -59.9182539971768, 62.4526776760226, -25.2365582422721},
	{42, -0.0173707989060656, 1.32641286049748, -3.31147277333979, 19.8188852304167, -68.8144782338293, 136.502428436238, -140.919678894445, 58.5169277649883},
	{43, -0.00980498817895336, 1.04533785901864, 0.641181767903704, -7.83513897128003, 35.9837156281972, -81.1997761782676, 91.7112854914653, -41.1339997534772},
	{44, -0.0133731564711943, 1.17018018176125, -1.07015887722344, 4.14812199521021, -10.4117784074461, 18.9171612353469, -20.8463291995314, 9.87872594466075}
};

const size_t mtf50_corrections_num_angles = 37;

#endif
