/*  This file is part of PKSM
>	Copyright (C) 2016/2017 Bernardo Giordano
>
>   This program is free software: you can redistribute it and/or modify
>   it under the terms of the GNU General Public License as published by
>   the Free Software Foundation, either version 3 of the License, or
>   (at your option) any later version.
>
>   This program is distributed in the hope that it will be useful,
>   but WITHOUT ANY WARRANTY; without even the implied warranty of
>   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
>   GNU General Public License for more details.
>
>   You should have received a copy of the GNU General Public License
>   along with this program.  If not, see <http://www.gnu.org/licenses/>.
>   See LICENSE for information.
*/

#include "fill.h"

void filldatabase7(char *database[], int spriteArray[]) {
	filldatabase6(database, spriteArray);
	
	database[0] = "0000 - Mewnium Z"; spriteArray[0] = 0;
	database[190] = "Placeholder";
	database[202] = "0202 - SM Revival Herb"; spriteArray[202] = 0;
	database[204] = "0204 - SM Item Bundle"; spriteArray[204] = 0;
	database[205] = "0205 - SM Choice Band/Scarf"; spriteArray[205] = 0;
	database[207] = "0207 - SM Big Nugget"; spriteArray[207] = 0;
	database[208] = "0208 - SM Rare Candy"; spriteArray[208] = 0;
	database[210] = "0210 - Gold Bottle Cap"; spriteArray[210] = 0;
	database[211] = "0211 - SM PC Icy items"; spriteArray[211] = 0;
	database[599] = "0599 - Bottle Cap"; spriteArray[599] = 0;
	database[1602] = "1602 - SM Quick Balls"; spriteArray[1602] = 0;
	database[1603] = "1603 - SM Poke Balls"; spriteArray[1603] = 0;
	database[1604] = "1604 - SM Rare Candy"; spriteArray[1604] = 0;
	database[1605] = "1605 - Mewtwoite X/Y"; spriteArray[1605] = 0;
	database[1606] = "1606 - Mawilite"; spriteArray[1606] = 0;
	database[1607] = "1607 - SM Rare Candy"; spriteArray[1607] = 0;
	database[1608] = "1608 - Pidgeot-Steelixite"; spriteArray[1608] = 0;
	database[1609] = "1609 - Mawilite"; spriteArray[1609] = 0;
	database[1610] = "1610 - SM Rare Candy"; spriteArray[1610] = 0;
	database[1611] = "1611 - SM 4 Mega Stones"; spriteArray[1611] = 0;
	database[1612] = "1612 - SM PGL Prize"; spriteArray[1612] = 0;
	database[1613] = "1613 - SM PGL Prize"; spriteArray[1613] = 0;
	database[1614] = "1614 - SM PGL Prize"; spriteArray[1614] = 0;
	database[1615] = "1615 - SM PGL Prize"; spriteArray[1615] = 0;
	database[1616] = "1616 - SM PGL Prize"; spriteArray[1616] = 0;
	database[2040] = "2040 - SM Stardust"; spriteArray[2040] = 0;
	database[2041] = "2041 - SM Star Piece"; spriteArray[2041] = 0;
	database[2042] = "2042 - SM Nugget"; spriteArray[2042] = 0;
	database[2043] = "2043 - SM Pretty Wings"; spriteArray[2043] = 0;
	database[2044] = "2044 - SM Balm Mushroom"; spriteArray[2044] = 0;
	database[2045] = "2045 - SM Comet Shard"; spriteArray[2045] = 0;
	database[2047] = "2047 - PGL 50BP"; spriteArray[2047] = 0;
	database[2048] = " "; spriteArray[2048] = -1; // no Eon Ticket in gen7
	
	database[201] = "0201 - SM Birthday Events"; spriteArray[201] = 764;
	database[203] = "0203 - PC Alolan Vulpix"; spriteArray[203] = 37;
	database[218] = "0218 - Lunar Shiny Magikarp"; spriteArray[218] = 129;
	database[219] = "0219 - 7-11 Machamp"; spriteArray[219] = 68;
	database[220] = "0220 - Shiny Tapu Koko"; spriteArray[220] = 785;
	database[221] = "0221 - JPN Egg Shiny Chance"; spriteArray[221] = 747;
	database[222] = "0222 - JPN Bewear"; spriteArray[222] = 760;
	database[223] = "0223 - Ash-hat Pikachu"; spriteArray[223] = 25;
	database[224] = "0224 - CoroCoro Charizard"; spriteArray[224] = 6;
	database[227] = "0227 - Bestow Pikachu"; spriteArray[227] = 25;
	database[230] = "0230 - Colorful Friends"; spriteArray[230] = 133;
	database[233] = "0233 - HK Shiny Tapu Koko"; spriteArray[233] = 785;
	database[234] = "0234 - Anime Steenee"; spriteArray[234] = 762;
	database[235] = "0235 - Anime Turtonator"; spriteArray[235] = 776;
	database[236] = "0236 - Anime Vulpix"; spriteArray[236] = 37;
	database[606] = "0606 - Rocky Lycanroc"; spriteArray[606] = 745;
	database[1105] = "1105 - Shiny Tapu Koko"; spriteArray[1105] = 785;
	database[1107] = "1107 - Alolan Vulpix"; spriteArray[1107] = 37;
	database[1108] = "1108 - Alolan Sandshrew"; spriteArray[1108] = 27;
	database[1109] = "1109 - Alolan Diglett"; spriteArray[1109] = 50;
	database[1110] = "1110 - Alolan Grimer"; spriteArray[1110] = 88;
	database[1111] = "1111 - KOR Egg Shiny Chance"; spriteArray[1111] = 780;
	database[1112] = "1112 - WCSK17 Mew"; spriteArray[1112] = 151;
	database[1601] = "1601 - Z-stone Munchlax"; spriteArray[1601] = 446;
	database[1610] = "Placeholder";
	database[2046] = "2046 - Ash Greninja"; spriteArray[2046] = 658;
}

void filldatabase6(char *database[], int spriteArray[]) {
	for (int j = 0; j < 2050; j++) {
		database[j] = " ";
		spriteArray[j] = -1;
	}
	
    database[8] = "0008 - Lucky Egg"; spriteArray[8] = 0;
	database[53] = "0053 - Nugget"; spriteArray[53] = 0;
	database[54] = "0054 - Super Potions"; spriteArray[54] = 0;
	database[55] = "0055 - Luxury Ball"; spriteArray[55] = 0;
	database[56] = "0056 - Rare Candy"; spriteArray[56] = 0;
	database[57] = "0057 - Master Ball"; spriteArray[57] = 0;
	database[58] = "0058 - 12 Quick Balls"; spriteArray[58] = 0;
	database[59] = "0059 - 100 Potions"; spriteArray[59] = 0;
	database[60] = "0060 - 2 Master Balls"; spriteArray[60] = 0;
	database[151] = "0151 - Scrap 5 Rare Candy"; spriteArray[151] = 0;
	database[152] = "0152 - Scrap Masterball"; spriteArray[152] = 0;
	database[157] = "0157 - Max Revive"; spriteArray[157] = 0;
	database[158] = "0158 - Masterball"; spriteArray[158] = 0;
	database[518] = "0518 - Heracronite"; spriteArray[518] = 0;
	database[527] = "0527 - 100 Potions"; spriteArray[527] = 0;
	database[599] = "0599 - Bottle Caps"; spriteArray[599] = 0;
	database[1022] = "1022 - 100 Potions"; spriteArray[1022] = 0;
	database[1057] = "1057 - 50 Quick Balls"; spriteArray[1057] = 0;
	database[1502] = "1502 - Quickballs"; spriteArray[1502] = 0;
	database[1511] = "1511 - Rare Candy"; spriteArray[1511] = 0;
	database[2048] = "2048 - Eon Ticket"; spriteArray[2048] = 0;

	database[1] = "0001 - Birthday events"; spriteArray[1] = 133;
	database[2] = "0002 - CoroCoro Garchomp"; spriteArray[2] = 445;
	database[3] = "0003 - PC Tokyo Bay Inkay"; spriteArray[3] = 686;
	database[4] = "0004 - Nuketta Wobbuffet"; spriteArray[4] = 202;
	//database[11] = "0011 - Alternate Event Garchomp"; spriteArray[11] = 445;
	database[12] = "0012 - Eevee House Sylveon"; spriteArray[12] = 700;
	database[15] = "0015 - CoroCoro Charizard"; spriteArray[15] = 6;
	//database[17] = "0017 - Garchomp"; spriteArray[17] = 445;
	database[19] = "0019 - PC Scizor"; spriteArray[19] = 212;
	database[20] = "0020 - PC Gengar"; spriteArray[20] = 94;
	database[21] = "0021 - Darkrai"; spriteArray[21] = 491;
	database[22] = "0022 - Diancie"; spriteArray[22] = 719;
	database[25] = "0025 - M-Gyarados"; spriteArray[25] = 130;
	database[26] = "0026 - M-Scizor"; spriteArray[26] = 212;
	database[27] = "0027 - M-Kangaskhan"; spriteArray[27] = 115;
	database[28] = "0028 - M-Gengar"; spriteArray[28] = 94;
	database[29] = "0029 - M-Tyranitar"; spriteArray[29] = 248;
	database[30] = "0030 - M-Mawile"; spriteArray[30] = 303;
	database[33] = "0033 - Mega Kick Pikachu"; spriteArray[33] = 25;
	database[34] = "0034 - Shiny Jirachi"; spriteArray[34] = 385;
	database[37] = "0037 - Surf Incense Pikachu"; spriteArray[37] = 25;
	database[38] = "0038 - Surf Balloon Pikachu"; spriteArray[38] = 25;
	database[39] = "0039 - Surf, Shard Pikachu"; spriteArray[39] = 25;
	database[40] = "0040 - Surf Focus Band Pikachu"; spriteArray[40] = 25;
	database[41] = "0041 - Surf Silk Scarf Pikachu"; spriteArray[41] = 25;
	database[42] = "0042 - Heart Stamp Pikachu"; spriteArray[42] = 25;
	database[43] = "0043 - Charizard X/Y"; spriteArray[43] = 6;
	database[44] = "0044 - Shiny Gengar"; spriteArray[44] = 94;
	database[45] = "0045 - Tretta Rotom"; spriteArray[45] = 479;
	database[46] = "0046 - Darkrai"; spriteArray[46] = 491;
	database[47] = "0047 - Diancie"; spriteArray[47] = 719;
	database[48] = "0048 - Birthday Events"; spriteArray[48] = 133;
	database[49] = "0049 - Shiny Gengar"; spriteArray[49] = 94;
	database[50] = "0050 - Pokescrap Shaymin"; spriteArray[50] = 492;
	database[51] = "0051 - Pokescrap Keldeo"; spriteArray[51] = 647;
	database[52] = "0052 - Pokescrap Victini"; spriteArray[52] = 494;
	database[61] = "0061 - Shiny Jirachi"; spriteArray[61] = 385;
	database[62] = "0062 - SSB4 Greninja"; spriteArray[62] = 658;
	database[63] = "0063 - PC Piplup"; spriteArray[63] = 393;
	database[64] = "0064 - PC Froakie"; spriteArray[64] = 656;
	database[65] = "0065 - Shiny Charizard"; spriteArray[65] = 6;
	database[66] = "0066 - Shiny Pikachu"; spriteArray[66] = 25;
	database[67] = "0067 - Extremespeed Linoone"; spriteArray[67] = 264;
	database[71] = "0071 - PC Eggs"; spriteArray[71] = 322;
	database[78] = "0078 - Shiny Rayquaza"; spriteArray[78] = 384;
	database[79] = "0079 - P-Cafe Pikachu"; spriteArray[79] = 25;
	database[81] = "0081 - Movie Arceus"; spriteArray[81] = 493;
	database[82] = "0082 - Movie Legends HA"; spriteArray[82] = 383;
	database[83] = "0083 - Movie Hoopa"; spriteArray[83] = 720;
	database[86] = "0086 - Serena's Fennekin"; spriteArray[86] = 653;
	database[88] = "0088 - CoroCoro Rayquaza"; spriteArray[88] = 384;
	database[89] = "0089 - Spring15 Kangaskhan"; spriteArray[89] = 115;
	database[90] = "0090 - SG Shiny Rayquaza"; spriteArray[90] = 384;
	database[94] = "0094 - PC Shiny Gyarados"; spriteArray[94] = 130;
	database[95] = "0095 - Hiroshima PC Magikarp"; spriteArray[95] = 129;
	database[96] = "0096 - Pokelab Bulbasaur"; spriteArray[96] = 1;
	database[97] = "0097 - Pokelab Charmander"; spriteArray[97] = 4;
	database[98] = "0098 - Pokelab Squirtle"; spriteArray[98] = 7;
	database[99] = "0099 - 7/11 Pikachu"; spriteArray[99] = 25;
	database[100] = "0100 - 7/11 Pancham"; spriteArray[100] = 674;
	database[101] = "0101 - 7/11 Lugia"; spriteArray[101] = 249;
	database[102] = "0102 - 7/11 Latios"; spriteArray[102] = 381;
	database[107] = "0107 - Y.ama Shiny Pikachu"; spriteArray[107] = 25;
	database[108] = "0108 - Tanabata 15 Jirachi"; spriteArray[108] = 385;
	database[109] = "0109 - Satay King Pikachu"; spriteArray[109] = 25;
	database[110] = "0110 - Manesh Hoopa"; spriteArray[110] = 720;
	database[111] = "0111 - Shiny Xerneas, Yveltal"; spriteArray[111] = 716;
	database[113] = "0113 - Zygarde"; spriteArray[113] = 718;
	database[114] = "0114 - Expo Charizard"; spriteArray[114] = 6;
	database[115] = "0115 - Expo Machamp"; spriteArray[115] = 68;
	database[116] = "0116 - Expo Smeargle"; spriteArray[116] = 235;
	database[117] = "0117 - Expo Zoroark"; spriteArray[117] = 571;
	database[119] = "0119 - Nintendo HK Rayquaza"; spriteArray[119] = 384;
	database[120] = "0120 - Universe Diancie"; spriteArray[120] = 719;
	database[121] = "0121 - Birthday events"; spriteArray[121] = 133;
	database[122] = "0122 - Halloween 2015 Pumpkaboo"; spriteArray[122] = 710;
	database[127] = "0127 - Pokelab Chikorita"; spriteArray[127] = 152;
	database[128] = "0128 - Pokelab Cyndaquil"; spriteArray[128] = 155;
	database[129] = "0129 - Pokelab Totodile"; spriteArray[129] = 158;
	database[130] = "0130 - WCS 2015 Shiny Tyranitar"; spriteArray[130] = 248;
	database[131] = "0131 - PC Shiny Diancie"; spriteArray[131] = 719;
	database[132] = "0132 - PC Al/Au/Sa/Lu/Sl"; spriteArray[132] = 334;
	database[133] = "0133 - PC Al/Au/Sa/Lu/Sl"; spriteArray[133] = 531;
	database[134] = "0134 - PC Al/Au/Sa/Lu/Sl"; spriteArray[134] = 448;
	database[135] = "0135 - PC Al/Au/Sa/Lu/Sl"; spriteArray[135] = 80;
	database[136] = "0136 - PC Al/Au/Sa/Lu/Sl"; spriteArray[136] = 302;
	database[137] = "0137 - VC Mew"; spriteArray[137] = 151;
	database[138] = "0138 - Happy Hour Pikachu"; spriteArray[138] = 25;
	database[141] = "0141 - Repeat Halloween Gengar"; spriteArray[141] = 94;
	database[142] = "0142 - PC Eggs"; spriteArray[142] = 322;
	database[145] = "0145 - HK Shiny Jirachi"; spriteArray[145] = 385;
	database[146] = "0146 - SG Arceus"; spriteArray[146] = 493;
	database[147] = "0147 - Scrap Eevee"; spriteArray[147] = 133;
	database[148] = "0148 - Scrap Articuno"; spriteArray[148] = 144;
	database[149] = "0149 - Scrap Zapdos"; spriteArray[149] = 145;
	database[150] = "0150 - Scrap Moltres"; spriteArray[150] = 146;
	database[153] = "0153 - Scrap Venusaur"; spriteArray[153] = 3;
	database[154] = "0154 - Scrap Charizard"; spriteArray[154] = 6;
	database[155] = "0155 - Scrap Blastoise"; spriteArray[155] = 9;
	database[156] = "0156 - Scrap Mewtwo"; spriteArray[156] = 150;
	database[159] = "0159 - Jade Infernape"; spriteArray[159] = 392;
	database[161] = "0161 - Movie Volcanion"; spriteArray[161] = 721;
	database[162] = "0162 - 720 Poll Greninja"; spriteArray[162] = 658;
	database[163] = "0163 - Surf and Fly Pikachu"; spriteArray[163] = 25;
	database[164] = "0164 - PC Shiny Ho-Oh"; spriteArray[164] = 250;
	database[165] = "0165 - Masuda's Psyduck"; spriteArray[165] = 54;
	database[166] = "0166 - Bestow Pikachu"; spriteArray[166] = 25;
	database[167] = "0167 - Hyadain Landorus"; spriteArray[167] = 645;
	database[168] = "0168 - Chymia's Gardevoir"; spriteArray[168] = 282;
	database[169] = "0169 - Jarvis's Gengar"; spriteArray[169] = 94;
	database[170] = "0170 - P-Cafe Pikachu (SG)"; spriteArray[170] = 25;
	database[171] = "0171 - Skytree Rayquaza"; spriteArray[171] = 384;
	database[173] = "0173 - HKTW VGC16 Shiny Mewtwo"; spriteArray[173] = 150;
	database[174] = "0174 - Tanabata 2016 Jirachi"; spriteArray[174] = 385;
	database[175] = "0175 - HKTW Mew"; spriteArray[175] = 151;
	database[176] = "0176 - Poll Simisear"; spriteArray[176] = 514;
	database[177] = "0177 - Giovanni's Nidoqueen"; spriteArray[177] = 31;
	database[178] = "0178 - Maxie's Camerupt"; spriteArray[178] = 323;
	database[179] = "0179 - Archie's Sharpedo"; spriteArray[179] = 319;
	database[180] = "0180 - Cyrus' Weavile"; spriteArray[180] = 461;
	database[181] = "0181 - Ghetsis' Hydreigon"; spriteArray[181] = 635;
	database[182] = "0182 - Lysandre's Pyroar"; spriteArray[182] = 668;
	database[183] = "0183 - Singa Volcanion"; spriteArray[183] = 721;
	database[184] = "0184 - PC Bday 2016"; spriteArray[184] = 133;
	database[501] = "0501 - Winter2013 Garchomp"; spriteArray[501] = 445;
	database[502] = "0502 - Winter2013 Scizor"; spriteArray[502] = 212;
	database[504] = "0504 - Magmar, Electabuzz"; spriteArray[504] = 125;
	database[510] = "0510 - Arash's Mamoswine"; spriteArray[510] = 473;
	database[511] = "0511 - Paris Vivillon"; spriteArray[511] = 666;
	database[512] = "0512 - WORLD14 Aegislash"; spriteArray[512] = 681;
	database[514] = "0514 - Tretta Wobbuffet"; spriteArray[514] = 202;
	database[515] = "0515 - Heracross - Pinsir"; spriteArray[515] = 214;
	database[516] = "0516 - Charizard X/Y"; spriteArray[516] = 6;
	database[523] = "0523 - Halloween 2014 Pumpkaboo"; spriteArray[523] = 710;
	database[524] = "0524 - Halloween Shiny Gengar"; spriteArray[524] = 94;
	database[525] = "0525 - November Diancie"; spriteArray[525] = 719;
	database[535] = "0535 - WC14 Pachirisu"; spriteArray[535] = 417;
	database[536] = "0536 - Phantom Force Darkrai"; spriteArray[536] = 491;
	database[537] = "0537 - Shiny Charizard"; spriteArray[537] = 6;
	database[538] = "0538 - GS Dragonite"; spriteArray[538] = 149;
	database[539] = "0539 - World15 Sharpedo"; spriteArray[539] = 319;
	database[546] = "0546 - Hope Diancie"; spriteArray[546] = 719;
	database[547] = "0547 - Galileo Rayquaza"; spriteArray[547] = 384;
	database[551] = "0551 - Gamescom Aromatisse/Sableye"; spriteArray[551] = 683;
	database[552] = "0552 - Gamescom Bouffalant/Malamar"; spriteArray[552] = 626;
	database[553] = "0553 - Harry Hoopa"; spriteArray[553] = 720;
	database[557] = "0557 - GF Mew"; spriteArray[557] = 151;
	database[558] = "0558 - GF Celebi"; spriteArray[558] = 251;
	database[559] = "0559 - GF Jirachi"; spriteArray[559] = 385;
	database[560] = "0560 - GF Darkrai"; spriteArray[560]	= 491;
	database[561] = "0561 - GF Manaphy"; spriteArray[561] = 490;
	database[562] = "0562 - GF Shaymin"; spriteArray[562] = 492;
	database[563] = "0563 - GF Arceus"; spriteArray[563] = 493;
	database[564] = "0564 - GF Victini"; spriteArray[564] = 494;
	database[565] = "0565 - GF Keldeo"; spriteArray[565] = 647;
	database[566] = "0566 - GF Genesect"; spriteArray[566] = 649;
	database[567] = "0567 - GF Meloetta"; spriteArray[567] = 648;
	database[569] = "0569 - Aldora Articuno"; spriteArray[569] = 144;
	database[570] = "0570 - Aldora Zapdos"; spriteArray[570] = 145;
	database[571] = "0571 - Aldora Moltres"; spriteArray[571] = 146;
	database[574] = "0574 - Happy Meowth"; spriteArray[574] = 52;
	database[576] = "0576 - Descartes Xerneas"; spriteArray[576] = 716;
	database[577] = "0577 - Descartes Yveltal"; spriteArray[577] = 717;
	database[578] = "0578 - Descartes Zygarde"; spriteArray[578] = 718;
	database[580] = "0580 - Screenpeekaz Shiny Machamp"; spriteArray[580] = 68;
	database[586] = "0586 - Play! Mewtwo"; spriteArray[586] = 150;
	database[588] = "0588 - Helen Volcanion"; spriteArray[588] = 721;
	database[590] = "0590 - WCS 2016 Bulbasaur"; spriteArray[590] = 1;
	database[591] = "0591 - WCS 2016 Charmander"; spriteArray[591] = 4;
	database[592] = "0592 - WCS 2016 Squirtle"; spriteArray[592] = 7;
	database[598] = "0598 - Alexander Hoopa"; spriteArray[598] = 720;
	database[812] = "0812 - Christmas Stantler"; spriteArray[812] = 234;
	database[1001] = "1001 - Eevee House Sylveon"; spriteArray[1001] = 700;
	database[1004] = "1004 - Olleh TV Charizard X/Y"; spriteArray[1004] = 6;
	database[1005] = "1005 - Alt. Event Garchomp"; spriteArray[1005] = 445;
	database[1006] = "1006 - WCS14K Heracross"; spriteArray[1006] = 214;
	database[1007] = "1007 - WCS14K Manectric"; spriteArray[1007] = 310;
	database[1008] = "1008 - WCS14K Tyranitar"; spriteArray[1008] = 248;
	//database[1012] = "1012 - WCS14K Pinsir"; spriteArray[1012] = 127;
	//database[1013] = "1013 - WCS14K Houndoom"; spriteArray[1013] = 229;
	//database[1014] = "1014 - WCS14K Aggron"; spriteArray[1014] = 306;
	database[1015] = "1015 - Wishing Star Jirachi"; spriteArray[1015] = 385;
	database[1016] = "1016 - Shiny Gengar"; spriteArray[1016] = 94;
	database[1017] = "1017 - Movie Darkrai"; spriteArray[1017] = 491;
	database[1018] = "1018 - Movie Diancie"; spriteArray[1018] = 719;
	database[1019] = "1019 - Se Jun Park Pachirisu"; spriteArray[1019] = 417;
	database[1023] = "1023 - Guidebook Keldeo"; spriteArray[1023] = 647;
	database[1024] = "1024 - Guidebook Shaymin"; spriteArray[1024] = 492;
	database[1025] = "1025 - Guidebook Mareep"; spriteArray[1025] = 179;
	database[1026] = "1026 - Extremespeed Linoone"; spriteArray[1026] = 264;
	database[1027] = "1027 - Shiny Charizard"; spriteArray[1027] = 6;
	database[1029] = "1029 - Shiny Rayquaza"; spriteArray[1029] = 384;
	database[1030] = "Placeholder";
	database[1041] = "1041 - Water Tribe Manaphy"; spriteArray[1041] = 490;
	database[1042] = "1042 - Mega Battle 2015 Charizard"; spriteArray[1042] = 6;
	database[1043] = "1043 - Shiny Pikachu"; spriteArray[1043] = 25;
	database[1047] = "1047 - Movie Kyogre"; spriteArray[1047] = 382;
	database[1048] = "1048 - Movie Groudon"; spriteArray[1048] = 383;
	database[1049] = "1049 - Movie Dialga"; spriteArray[1049] = 483;
	database[1050] = "1050 - Movie Palkia"; spriteArray[1050] = 484;
	database[1051] = "1051 - Movie Giratina"; spriteArray[1051] = 487;
	database[1052] = "1052 - Movie Kyurem"; spriteArray[1052] = 646;
	database[1053] = "1053 - Movie Arceus"; spriteArray[1053] = 493;
	database[1054] = "1054 - Movie Hoopa"; spriteArray[1054] = 720;
	database[1055] = "1055 - Shiny Gyarados"; spriteArray[1055] = 130;
	database[1058] = "1058 - KOR GF Mew"; spriteArray[1058] = 151;
	database[1060] = "1060 - XYZ Xerneas"; spriteArray[1060] = 716;
	database[1061] = "1061 - XYZ Yveltal"; spriteArray[1061] = 717;
	database[1062] = "1062 - Korean Premiere XYZ Zygarde"; spriteArray[1062] = 718;
	database[1064] = "1064 - XYZ Zygarde"; spriteArray[1064] = 718;
	database[1065] = "1065 - KOR HA Articuno"; spriteArray[1065] = 144;
	database[1066] = "1066 - KOR HA Zapdos"; spriteArray[1066] = 145;
	database[1067] = "1067 - KOR HA Moltres"; spriteArray[1067] = 146;
	database[1068] = "1068 - WCS16K HA Mewtwo"; spriteArray[1068] = 150;
	database[1070] = "1070 - KOR Naminori Pikachu"; spriteArray[1070] = 25;
	database[1071] = "1071 - KOR All Stars Diancie"; spriteArray[1071] = 719;
	database[1072] = "1072 - KOR Gardevoir"; spriteArray[1072] = 282;
	database[1073] = "1073 - KOR Gengar"; spriteArray[1073] = 94;
	database[1074] = "1074 - KOR Tyranitar"; spriteArray[1074] = 248;
	database[1075] = "1075 - KOR Mawile"; spriteArray[1075] = 303;
	database[1076] = "1076 - KOR Victini"; spriteArray[1076] = 494;
	database[1078] = "1078 - KOR Volcanion"; spriteArray[1078] = 721;
	database[1501] = "1501 - HA Torchic"; spriteArray[1501] = 255;
	database[1503] = "1503 - Fancy Vivillon"; spriteArray[1503] = 666;
	database[1504] = "1504 - Shiny Beldum"; spriteArray[1504] = 374;
	database[1505] = "1505 - HA Serperior"; spriteArray[1505] = 497;
	database[1506] = "1506 - HA Emboar"; spriteArray[1506] = 500;
	database[1507] = "1507 - HA Samurott"; spriteArray[1507] = 503;
	database[1508] = "1508 - PGL Tyrunt"; spriteArray[1508] = 696;
	database[1509] = "1509 - PGL Amaura"; spriteArray[1509] = 698;
	database[1510] = "1510 - PGL Pikachu"; spriteArray[1510] = 25;
	database[1512] = "1512 - PGL Delibird"; spriteArray[1512] = 225;
	database[1513] = "1513 - PGL Dragonite"; spriteArray[1513] = 149;
	database[1514] = "1514 - PGL Miltank"; spriteArray[1514] = 241;
	database[1515] = "1515 - PGL Garchomp"; spriteArray[1515] = 445;
	database[1516] = "1516 - PGL N's Darmanitan"; spriteArray[1516] = 555;
}

void filldatabase5(char *database[], int spriteArray[]) {	
	for (int j = 0; j < 170; j++) {
			database[j] = " ";
			spriteArray[j] = -1;
	}
	
	database[0] = "000 - Liberty Pass"; spriteArray[0] = 0;
	database[1] = "001 - Helpful Cubchoo"; spriteArray[1] = 613;
	database[2] = "002 - Summer Karrablast"; spriteArray[2] = 588;
	database[3] = "003 - Summer Shelmet"; spriteArray[3] = 617;
	database[4] = "004 - TFE Electabuzz"; spriteArray[4] = 125;
	database[5] = "005 - TFE Haunter"; spriteArray[5] = 93;
	database[6] = "006 - TFE Machoke"; spriteArray[6] = 67;
	database[7] = "007 - TFE Magmar"; spriteArray[7] = 126;
	database[8] = "008 - TFE Scyther"; spriteArray[8] = 123;
	database[9] = "009 - TFE Slowpoke"; spriteArray[9] = 79;
	database[10] = "010 - TFE Karrablast"; spriteArray[10] = 588;
	database[11] = "011 - TFE Shelmet"; spriteArray[11] = 616;
	database[25] = "025 - Milos Island Tornadus"; spriteArray[25] = 641;
	database[26] = "026 - Kalita's Hydreigon"; spriteArray[26] = 635;
	database[27] = "027 - Spring 2012 Zekrom"; spriteArray[27] = 644;
	database[28] = "028 - Darkrai"; spriteArray[28] = 491;
	database[29] = "029 - Mysterious Egg Pidove"; spriteArray[29] = 519;
	database[30] = "030 - Snarl Zoroark"; spriteArray[30] = 571;
	database[31] = "031 - Satoshi's Scraggy"; spriteArray[31] = 559;
	database[32] = "032 - Movie 2011 Victini"; spriteArray[32] = 494;
	database[33] = "033 - Movie 2011 Reshiram"; spriteArray[33] = 643;
	database[34] = "034 - Searcher Axew"; spriteArray[34] = 610;
	database[35] = "035 - Janta's Golurk"; spriteArray[35] = 623;
	database[36] = "036 - ANA Flying Pikachu"; spriteArray[36] = 25;
	database[37] = "037 - Worlds 2011 Scrafty"; spriteArray[37] = 560;
	database[38] = "038 - ELT Pikachu"; spriteArray[38] = 25;
	database[39] = "039 - AAA Pikachu"; spriteArray[39] = 25;
	database[40] = "040 - Chisa Pikachu"; spriteArray[40] = 25;
	database[41] = "041 - Amigo Pikachu"; spriteArray[41] = 25;
	database[42] = "042 - SKE48 Pikachu"; spriteArray[42] = 25;
	database[43] = "043 - Wasshoi Pikachu"; spriteArray[43] = 25;
	database[45] = "045 - Churuno Pikachu"; spriteArray[45] = 25;
	database[48] = "048 - Mighty Mewtwo"; spriteArray[48] = 150;
	database[49] = "049 - Tohoku Snivy"; spriteArray[49] = 495;
	database[50] = "050 - BDay Audino 2011"; spriteArray[50] = 531;
	database[51] = "051 - Milos Island Thundurus"; spriteArray[51] = 642;
	database[52] = "052 - Master Ball"; spriteArray[52] = 0;
	database[53] = "053 - Gratitude Shaymin"; spriteArray[53] = 492;
	database[54] = "054 - YOTD egg Bagon"; spriteArray[54] = 371;
	database[55] = "055 - YOTD Deino"; spriteArray[55] = 633;
	database[56] = "056 - YOTD Druddigon"; spriteArray[56] = 621;
	database[57] = "057 - YOTD Swablu"; spriteArray[57] = 333;
	database[58] = "058 - Game Rayquaza"; spriteArray[58] = 384;
	database[59] = "059 - Nobunaga Rayquaza"; spriteArray[59] = 384;
	database[61] = "061 - Nationals 2012 Larvitar"; spriteArray[61] = 246;
	database[62] = "062 - Nagasaki Blaziken"; spriteArray[62] = 257;
	database[63] = "063 - Nagasaki Walrein"; spriteArray[63] = 365;
	database[64] = "064 - Nagasaki Gardevoir"; spriteArray[64] = 282;
	database[65] = "065 - Fukuoka Groudon"; spriteArray[65] = 383;
	database[66] = "066 - Fukuoka Kyogre"; spriteArray[66] = 382;
	database[67] = "067 - Sakura Pikachu"; spriteArray[67] = 25;
	database[68] = "068 - Master Ball"; spriteArray[68] = 0;
	database[69] = "069 - Summer Keldeo"; spriteArray[69] = 647;
	database[70] = "070 - Movie 2012 Meloetta"; spriteArray[70] = 648;
	database[71] = "071 - Strongest Pikachu"; spriteArray[71] = 25;
	database[73] = "073 - Sasebo Ludicolo"; spriteArray[73] = 272;
	database[75] = "075 - Saga Sceptile"; spriteArray[75] = 254;
	database[76] = "076 - Saga Milotic"; spriteArray[76] = 350;
	database[78] = "078 - Kumamoto Swampert"; spriteArray[78] = 260;
	database[89] = "089 - SP Miyazaki Metagross"; spriteArray[89] = 376;
	database[92] = "092 - Kokura Salamence"; spriteArray[92] = 373;
	database[93] = "093 - Searcher Piplup"; spriteArray[93] = 393;
	database[94] = "094 - Nats 2012 Volcarona"; spriteArray[94] = 637;
	database[95] = "095 - Kanto Starter eggs"; spriteArray[95] = 1;
	database[96] = "096 - Carnival Pikachu"; spriteArray[96] = 25;
	database[97] = "097 - Singing Piplup"; spriteArray[97] = 393;
	database[98] = "098 - Camp Aerodactyl"; spriteArray[98] = 142;
	database[99] = "099 - Plasma Genesect"; spriteArray[99] = 649;
	database[100] = "100 - Worlds 2012 Fly Pikachu"; spriteArray[100] = 25;
	database[101] = "101 - Tag Ninetails"; spriteArray[101] = 38;
	database[102] = "102 - Tag Chandelure"; spriteArray[102] = 609;
	database[103] = "103 - Tag Whimsicott"; spriteArray[103] = 547;
	database[104] = "104 - Tag Lucario"; spriteArray[104] = 448;
	database[105] = "105 - YOTD Horsea"; spriteArray[105] = 116;
	database[106] = "106 - YOTD Trapinch"; spriteArray[106] = 328;
	database[111] = "111 - Single Battle Strongest Dragonite"; spriteArray[111] = 149;
	database[112] = "112 - Single Battle Strongest Garchomp"; spriteArray[112] = 445;
	database[113] = "113 - Single Battle Strongest Metagross"; spriteArray[113] = 376;
	database[114] = "114 - Single Battle Strongest Scizor"; spriteArray[114] = 212;
	database[115] = "115 - Single Battle Strongest Tyranitar"; spriteArray[115] = 248;
	database[118] = "118 - Anniversary Groudon"; spriteArray[118] = 383;
	database[119] = "119 - Anniversary Kyogre"; spriteArray[119] = 382;
	database[120] = "120 - Team Rocket Meowth"; spriteArray[120] = 52;
	database[121] = "121 - Kanto egg Bulbasaur"; spriteArray[121] = 1;
	database[122] = "122 - Kanto egg Charmander"; spriteArray[122] = 4;
	database[123] = "123 - Kanto egg Squirtle"; spriteArray[123] = 7;
	database[124] = "124 - Fukuoka BDay Audino"; spriteArray[124] = 531;
	database[125] = "125 - Tohoku Victini"; spriteArray[125] = 494;
	database[126] = "126 - Masuda Deoxys"; spriteArray[126] = 386;
	database[127] = "127 - P2 Lab Genesect"; spriteArray[127] = 649;
	database[128] = "128 - Winter Keldeo"; spriteArray[128] = 647;
	database[129] = "129 - Spring Meloetta"; spriteArray[129] = 648;
	database[130] = "130 - Abram's Cloyster"; spriteArray[130] = 91;
	database[131] = "131 - Toler's Ludicolo"; spriteArray[131] = 272;
	database[132] = "132 - Ray's Metagross"; spriteArray[132] = 376;
	database[133] = "133 - Plasma Deoxys"; spriteArray[133] = 386;
	database[134] = "134 - Nagoya Magikarp"; spriteArray[134] = 129;
	database[135] = "135 - Movie 2013 Mewtwo"; spriteArray[135] = 150;
	database[136] = "136 - Movie 2013 Genesect"; spriteArray[136] = 649;
	database[137] = "137 - Decolora Jirachi"; spriteArray[137] = 385;
	database[138] = "138 - Singing Eevee"; spriteArray[138] = 133;
	database[139] = "139 - PCS Empoleon"; spriteArray[139] = 395;
	database[140] = "140 - PCTH Serperior"; spriteArray[140] = 497;
	database[141] = "141 - PCT Pikachu"; spriteArray[141] = 25;
	database[142] = "142 - PCY Torterra"; spriteArray[142] = 389;
	database[143] = "143 - PCN Infernape"; spriteArray[143] = 392;
	database[144] = "144 - PCO Emboar"; spriteArray[144] = 500;
	database[145] = "145 - PCF Samurott"; spriteArray[145] = 503;
	database[147] = "147 - Singing Eevee"; spriteArray[147] = 133;
	database[148] = "148 - Summer Shiny Dialga"; spriteArray[148] = 483;
	database[149] = "149 - Summer Shiny Palkia"; spriteArray[149] = 484;
	database[150] = "150 - Summer Shiny Giratina"; spriteArray[150] = 487;
	database[151] = "151 - Tanabata Jirachi"; spriteArray[151] = 385;
	database[152] = "152 - Strongest Pikachu"; spriteArray[152] = 25;
	database[153] = "153 - Character Fair Jirachi"; spriteArray[153] = 385;
	database[154] = "154 - Chilseok Jirachi"; spriteArray[154] = 385;
	database[155] = "155 - Worlds 2013 Smeargle"; spriteArray[155] = 235;
	database[156] = "156 - Alder's Volcarona"; spriteArray[156] = 637;
	database[157] = "157 - Cynthia's Spiritomb"; spriteArray[157] = 442;
	database[158] = "158 - Dento's Pansage"; spriteArray[158] = 511;
	database[159] = "159 - Iris's Axew"; spriteArray[159] = 610;
	database[160] = "160 - Prof Okido's Rotom"; spriteArray[160] = 479;
	database[161] = "161 - Satoshi's Pikachu"; spriteArray[161] = 25;
	database[162] = "162 - Do Heun's Hitmontop"; spriteArray[162] = 237;
	database[163] = "163 - Seung Heon's Cresselia"; spriteArray[163] = 488;
	database[164] = "164 - Sejun's Liepard"; spriteArray[164] = 510;
	database[165] = "165 - Chief's Sableye"; spriteArray[165] = 302;
	database[166] = "166 - Yamamoto's Politoed"; spriteArray[166] = 186;
	database[167] = "167 - Tamamoto's Kingdra"; spriteArray[167] = 230;
}

void filldatabase4(char *database[], int spriteArray[]) {	
	for (int j = 0; j < 190; j++) {
			database[j] = " ";
			spriteArray[j] = -1;
	}

	database[1] = "001 - TRU Manaphy"; spriteArray[1] = 490;
	database[2] = "002 - Festa Electabuzz"; spriteArray[2] = 125;
	database[3] = "003 - Festa Magmar"; spriteArray[3] = 126;
	database[4] = "004 - NWS Manaphy"; spriteArray[4] = 490;
	database[5] = "005 - JBHF Manaphy"; spriteArray[5] = 490;
	database[6] = "006 - E4ALL Manaphy"; spriteArray[6] = 490;
	database[7] = "007 - Sunday Tropius"; spriteArray[7] = 357;
	database[8] = "008 - GameStop Deoxys"; spriteArray[8] = 386;
	database[9] = "009 - Movie Darkrai"; spriteArray[9] = 491;
	database[10] = "010 - Sunday Whiscash"; spriteArray[10] = 340;
	database[11] = "011 - Pal City Lucario"; spriteArray[11] = 448;
	database[12] = "012 - TRU Dragonite"; spriteArray[12] = 149;
	database[13] = "013 - Nzone Pikachu"; spriteArray[13] = 25;
	database[14] = "014 - Tanabata Jirachi 2007"; spriteArray[14] = 385;
	database[15] = "015 - Bday Charmander"; spriteArray[15] = 4;
	database[16] = "016 - Movie Shaymin"; spriteArray[16] = 492;
	database[17] = "017 - Secret Key"; spriteArray[17] = 0;
	database[18] = "018 - Member Card"; spriteArray[18] = 0;
	database[19] = "019 - Movie Arceus"; spriteArray[19] = 0;
	database[20] = "020 - Oak's Letter"; spriteArray[20] = 0;
	database[21] = "021 - Pikachu-Colored Pichu"; spriteArray[21] = 172;
	database[22] = "022 - Almia Darkrai"; spriteArray[22] = 491;
	database[23] = "023 - Kyle Riolu"; spriteArray[23] = 447;
	database[24] = "024 - Night Sky Jirachi"; spriteArray[24] = 385;
	database[25] = "025 - Concert Chatot"; spriteArray[25] = 441;
	database[26] = "026 - Pal City Manaphy"; spriteArray[26] = 490;
	database[27] = "027 - Pal City Mew"; spriteArray[27] = 151;
	database[28] = "028 - Matchup Checker"; spriteArray[28] = 0;
	database[29] = "029 - Sunday Octillery"; spriteArray[29] = 224;
	database[30] = "030 - Strongest Electivire"; spriteArray[30] = 466;
	database[31] = "031 - Strongest Magmortar"; spriteArray[31] = 467;
	database[32] = "032 - Strongest Milotic"; spriteArray[32] = 350;
	database[33] = "033 - Strongest Dragonite"; spriteArray[33] = 149;
	database[34] = "034 - Strongest Salamence"; spriteArray[34] = 373;
	database[35] = "035 - McDonald's Pikachu"; spriteArray[35] = 25;
	database[36] = "036 - Bday Charmander"; spriteArray[36] = 4;
	database[37] = "037 - Tanabata Jirachi 2008"; spriteArray[37] = 385;
	database[38] = "038 - PC Yokohama Pikachu"; spriteArray[38] = 25;
	database[39] = "039 - Bday Pikachu 2008"; spriteArray[39] = 25;
	database[40] = "040 - Eevee Collection"; spriteArray[40] = 133;
	database[41] = "041 - Onemuri Pikachu"; spriteArray[41] = 25;
	database[43] = "043 - Osaka Meowth"; spriteArray[43] = 52;
	database[45] = "045 - Lucario Doll"; spriteArray[45] = 0;
	database[47] = "047 - Bday Charmander 2009"; spriteArray[47] = 4;
	database[48] = "048 - Yellow Forest Course"; spriteArray[48] = 0;
	database[49] = "049 - Bday Chimchar 2009"; spriteArray[49] = 390;
	database[50] = "050 - Kyoto Pikachu"; spriteArray[50] = 25;
	database[51] = "051 - Winner's Path Course"; spriteArray[51] = 0;
	database[52] = "052 - VGC10 Eevee"; spriteArray[52] = 133;
	database[53] = "053 - Anniversary Mew"; spriteArray[53] = 151;
	database[54] = "054 - Enigma Stone"; spriteArray[54] = 0;
	database[55] = "055 - Shopping Course"; spriteArray[55] = 0;
	database[56] = "056 - Ario Pikachu"; spriteArray[56] = 25;
	database[57] = "057 - Bday Pikachu"; spriteArray[57] = 25;
	database[58] = "058 - Event Course"; spriteArray[58] = 0;
	database[59] = "059 - Winter Raikou"; spriteArray[59] = 243;
	database[60] = "060 - Winter Entei"; spriteArray[60] = 244;
	database[61] = "061 - Winter Suicune"; spriteArray[61] = 245;
	database[62] = "062 - GameStop Celebi"; spriteArray[62] = 251;
	database[63] = "063 - Goon's Scizor"; spriteArray[63] = 212;
	database[64] = "064 - Amity Field Course"; spriteArray[64] = 0;
	database[65] = "065 - Ash's Pikachu"; spriteArray[65] = 25;
	database[66] = "066 - NZ Manaphy"; spriteArray[66] = 490;
	database[67] = "067 - Bday Charmander 2010"; spriteArray[67] = 4;
	database[68] = "068 - Worlds 2010 Crobat"; spriteArray[68] = 169;
	database[69] = "069 - 7-Eleven Pikachu"; spriteArray[69] = 25;
	database[70] = "070 - Bday Chimchar 2010"; spriteArray[70] = 390;
	database[71] = "071 - Amity Field Course"; spriteArray[71] = 0;
	database[72] = "072 - Battle Series Arcanine"; spriteArray[72] = 59;
	database[73] = "073 - Hanguk Rayquaza"; spriteArray[73] = 384;
	database[74] = "074 - Shinsegae Munchlax"; spriteArray[74] = 446;
	database[75] = "075 - Shinsegae Feebas"; spriteArray[75] = 349;
	database[76] = "076 - Character Fair Shaymin"; spriteArray[76] = 492;
	database[77] = "077 - Character Fair Pikachu"; spriteArray[77] = 25;
	database[78] = "078 - Sightseeing Course"; spriteArray[78] = 0;
	database[79] = "079 - Manaphy Egg"; spriteArray[79] = 490;
	database[80] = "080 - TCGWC Pikachu"; spriteArray[80] = 25;
	database[90] = "090 - Azure Flute (unofficial)"; spriteArray[90] = 0;
	database[108] = "108 - Apicot Berry"; spriteArray[108] = 0;
	database[150] = "150 - Poketopia Pikachu"; spriteArray[150] = 25;
	database[151] = "151 - Poketopia Electivire"; spriteArray[151] = 466;
	database[152] = "152 - Poketopia Magmortar"; spriteArray[152] = 467;
	database[153] = "153 - Worlds 2008 Lucario"; spriteArray[153] = 448;
	database[154] = "154 - VGC09 Milotic"; spriteArray[154] = 350;
	database[180] = "180 - Movie Regigigas"; spriteArray[180] = 486;
	database[181] = "181 - Worlds 2009 Weavile"; spriteArray[181] = 461;
	database[182] = "182 - Oblivia Deoxys (Attack)"; spriteArray[182] = 386;
	database[183] = "183 - Oblivia Heatran"; spriteArray[183] = 485;
	database[184] = "184 - Oblivia Shaymin"; spriteArray[184] = 492;
	database[185] = "185 - Oblivia Deoxys (Defense)"; spriteArray[185] = 386;
	database[186] = "186 - Oblivia Deoxys (Normal)"; spriteArray[186] = 386;
	database[187] = "187 - Oblivia Deoxys (Speed)"; spriteArray[187] = 386;
}
