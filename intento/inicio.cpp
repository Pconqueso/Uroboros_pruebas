#include <stdio.h>    
#include <stdlib.h>    
#include <time.h>       
#include "inicio.h"


inicio::inicio()
{
	srand (time(NULL));
	int op;
	op= rand() % 10;
	
	switch (op)
	{
		case 1 :
			{
				cout<<"   	   /$$   /$$                     /$$                                              "<<endl;
				cout<<"	  | $$  | $$                    | $$                                              "<<endl;
				cout<<"	  | $$  | $$  /$$$$$$   /$$$$$$ | $$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$$ "<<endl;
				cout<<"	  | $$  | $$ /$$__  $$ /$$__  $$| $$__  $$ /$$__  $$ /$$__  $$ /$$__  $$ /$$_____/ "<<endl;
				cout<<"	  | $$  | $$| $$  \ __/| $$  \  $$| $$  \  $$| $$  \  $$| $$   \__/| $$   \ $$|  $$$$$$   "<<endl;
				cout<<"	  | $$  | $$| $$      | $$  | $$| $$  | $$| $$  | $$| $$      | $$  | $$ \____  $$ "<<endl;
				cout<<"	  |  $$$$$$/| $$      |  $$$$$$/| $$$$$$$/|  $$$$$$/| $$      |  $$$$$$/ /$$$$$$$/ "<<endl;
				cout<<"	   \ ______/ |__/        \______/ |_______/  \ ______/ |__/       \ ______/ |_______/  "<<endl;
				cout<<endl;
			}
		break;
		case 2 :
			{
				cout<<"  ¦¦    ¦¦ ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦¦¦¦¦¦ "<<endl;
				cout<<"  ¦¦    ¦¦ ¦¦   ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦    ¦¦ ¦¦      "<<endl;
				cout<<"  ¦¦    ¦¦ ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦¦¦ "<<endl;
				cout<<"  ¦¦    ¦¦ ¦¦   ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦    ¦¦      ¦¦ "<<endl;
				cout<<"   ¦¦¦¦¦¦  ¦¦   ¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦   ¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦ "<<endl;
				cout<<endl;
				
		
			}
		break;
		case 3 :
			{
				cout<<"  ¦¦+   ¦¦+¦¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦¦+  ¦¦¦¦¦¦+ ¦¦¦¦¦¦¦+"<<endl;
				cout<<"  ¦¦¦   ¦¦¦¦¦+--¦¦+¦¦+---¦¦+¦¦+--¦¦+¦¦+---¦¦+¦¦+--¦¦+¦¦+---¦¦+¦¦+----+"<<endl;
				cout<<"  ¦¦¦   ¦¦¦¦¦¦¦¦¦++¦¦¦   ¦¦¦¦¦¦¦¦¦++¦¦¦   ¦¦¦¦¦¦¦¦¦++¦¦¦   ¦¦¦¦¦¦¦¦¦¦+"<<endl;
				cout<<"  ¦¦¦   ¦¦¦¦¦+--¦¦+¦¦¦   ¦¦¦¦¦+--¦¦+¦¦¦   ¦¦¦¦¦+--¦¦+¦¦¦   ¦¦¦+----¦¦¦"<<endl;
				cout<<"  +¦¦¦¦¦¦++¦¦¦  ¦¦¦+¦¦¦¦¦¦++¦¦¦¦¦¦+++¦¦¦¦¦¦++¦¦¦  ¦¦¦+¦¦¦¦¦¦++¦¦¦¦¦¦¦¦"<<endl;
				cout<<"   +-----+ +-+  +-+ +-----+ +-----+  +-----+ +-+  +-+ +-----+ +------+"<<endl;
				cout<<endl;
			}
		break;

		case 5 :
			{
				cout<<"  '||'  '|'                 '||                                     "<<endl;
				cout<<"   ||    |  ... ..    ...    || ...    ...   ... ..    ...    ....  "<<endl;
				cout<<"   ||    |   ||' '' .|  '|.  ||'  || .|  '|.  ||' '' .|  '|. ||. '  "<<endl;
				cout<<"   ||    |   ||     ||   ||  ||    | ||   ||  ||     ||   || . '|.. "<<endl;
				cout<<"    '|..'   .||.     '|..|'  '|...'   '|..|' .||.     '|..|' |'..|' "<<endl;
				cout<<endl;
			}
		break;
		case 6 :
			{
			cout<<"  ¦¦¦    ¦_     _¦¦¦¦¦¦¦¦  _¦¦¦¦¦¦_  ¯¦¦¦¦¦¦¦¦¦_   _¦¦¦¦¦¦_     _¦¦¦¦¦¦¦¦  _¦¦¦¦¦¦_     _¦¦¦¦¦¦¦¦ "<<endl;
			cout<<"  ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ "<<endl;
			cout<<"  ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¯  "<<endl;
			cout<<"  ¦¦¦    ¦¦¦  _¦¦¦____¦¦¯ ¦¦¦    ¦¦¦  _¦¦¦___¦¦¯  ¦¦¦    ¦¦¦  _¦¦¦____¦¦¯ ¦¦¦    ¦¦¦   ¦¦¦        "<<endl;
			cout<<"  ¦¦¦    ¦¦¦ ¯¯¦¦¦¯¯¯¯¯   ¦¦¦    ¦¦¦ ¯¯¦¦¦¯¯¯¦¦_  ¦¦¦    ¦¦¦ ¯¯¦¦¦¯¯¯¯¯   ¦¦¦    ¦¦¦ ¯¦¦¦¦¦¦¦¦¦¦¦ "<<endl;
			cout<<"  ¦¦¦    ¦¦¦ ¯¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦_ ¦¦¦    ¦¦¦ ¯¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦    ¦¦¦          ¦¦¦ "<<endl;
			cout<<"  ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦   ¦¦¦    ¦¦¦ ¦¦¦    ¦¦¦    _¦    ¦¦¦ "<<endl;
			cout<<"  ¦¦¦¦¦¦¦¦¯    ¦¦¦    ¦¦¦  ¯¦¦¦¦¦¦¯  _¦¦¦¦¦¦¦¦¦¯   ¯¦¦¦¦¦¦¯    ¦¦¦    ¦¦¦  ¯¦¦¦¦¦¦¯   _¦¦¦¦¦¦¦¦¯  "<<endl;
			cout<<"               ¦¦¦    ¦¦¦                                      ¦¦¦    ¦¦¦                         "<<endl;
			cout<<endl;
			}
		break;
		case 7 :
			{
				cout<<"   .S       S.    .S_sSSs      sSSs_sSSs     .S_SSSs      sSSs_sSSs     .S_sSSs      sSSs_sSSs      sSSs  "<<endl;
				cout<<"  .SS       SS.  .SS~YS%%b    d%%SP~YS%%b   .SS~SSSSS    d%%SP~YS%%b   .SS~YS%%b    d%%SP~YS%%b    d%%SP  "<<endl;
				cout<<"  S%S       S%S  S%S   `S%b  d%S'     `S%b  S%S   SSSS  d%S'     `S%b  S%S   `S%b  d%S'     `S%b  d%S'    "<<endl;
				cout<<"  S%S       S%S  S%S    S%S  S%S       S%S  S%S    S%S  S%S       S%S  S%S    S%S  S%S       S%S  S%|     "<<endl;
				cout<<"  S&S       S&S  S%S    d*S  S&S       S&S  S%S SSSS%P  S&S       S&S  S%S    d*S  S&S       S&S  S&S     "<<endl;
				cout<<"  S&S       S&S  S&S   .S*S  S&S       S&S  S&S  SSSY   S&S       S&S  S&S   .S*S  S&S       S&S  Y&Ss    "<<endl;
				cout<<"  S&S       S&S  S&S_sdSSS   S&S       S&S  S&S    S&S  S&S       S&S  S&S_sdSSS   S&S       S&S  `S&&S   "<<endl;
				cout<<"  S&S       S&S  S&S~YSY%b   S&S       S&S  S&S    S&S  S&S       S&S  S&S~YSY%b   S&S       S&S    `S*S  "<<endl;
				cout<<"  S*b       d*S  S*S   `S%b  S*b       d*S  S*S    S&S  S*b       d*S  S*S   `S%b  S*b       d*S     l*S  "<<endl;
				cout<<"  S*S.     .S*S  S*S    S%S  S*S.     .S*S  S*S    S*S  S*S.     .S*S  S*S    S%S  S*S.     .S*S    .S*P  "<<endl;
				cout<<"   SSSbs_sdSSS   S*S    S&S   SSSbs_sdSSS   S*S SSSSP    SSSbs_sdSSS   S*S    S&S   SSSbs_sdSSS   sSS*S   "<<endl;
				cout<<"    YSSP~YSSY    S*S    SSS    YSSP~YSSY    S*S  SSY      YSSP~YSSY    S*S    SSS    YSSP~YSSY    YSS'    "<<endl;
				cout<<"                 SP                         SP                         SP                                 "<<endl;
				cout<<"                 Y                          Y                          Y                                  "<<endl;
				cout<<endl;
			}
		break;
		case 4 :
			{
				cout<<"  d       b d ss.    sSSSs   d ss.    sSSSs   d ss.    sSSSs     sss. "<<endl;
				cout<<"  S       S S    b  S     S  S    b  S     S  S    b  S     S  d      "<<endl;
				cout<<"  S       S S    P S       S S    P S       S S    P S       S Y      "<<endl;
				cout<<"  S       S S sS'  S       S S sSS' S       S S sS'  S       S   ss.  "<<endl;
				cout<<"  S       S S   S  S       S S    b S       S S   S  S       S      b "<<endl;
				cout<<"   S     S  S    S  S     S  S    P  S     S  S    S  S     S       P "<<endl;
				cout<<"     sss    P    P    sss    P `SS     sss    P    P    sss    ` ss'  "<<endl;
				cout<<endl;
			}
		break;
		case 8 :
			{
				cout<<"  ##     ## ########   #######  ########   #######  ########   #######   ######  "<<endl;
				cout<<"  ##     ## ##     ## ##     ## ##     ## ##     ## ##     ## ##     ## ##    ## "<<endl;
				cout<<"  ##     ## ##     ## ##     ## ##     ## ##     ## ##     ## ##     ## ##       "<<endl;
				cout<<"  ##     ## ########  ##     ## ########  ##     ## ########  ##     ##  ######  "<<endl;
				cout<<"  ##     ## ##   ##   ##     ## ##     ## ##     ## ##   ##   ##     ##       ## "<<endl;
				cout<<"  ##     ## ##    ##  ##     ## ##     ## ##     ## ##    ##  ##     ## ##    ## "<<endl;
				cout<<"   #######  ##     ##  #######  ########   #######  ##     ##  #######   ######  "<<endl;
				cout<<endl;
			}
		break;
		case 9 :
			{
				cout<<"  888     888                 888                                        "<<endl;
				cout<<"  888     888                 888                                        "<<endl;
				cout<<"  888     888                 888                                        "<<endl;
				cout<<"  888     888 888d888 .d88b.  88888b.   .d88b.  888d888 .d88b.  .d8888b  "<<endl;
				cout<<"  888     888 888P   d88  8b  888  88b d88  8b  888P   d88  8b  88K      "<<endl;
				cout<<"  888     888 888    888  888 888  888 888  888 888    888  888  Y8888b. "<<endl;
				cout<<"  Y88b. .d88P 888    Y88..88P 888 d88P Y88..88P 888    Y88..88P      X88 "<<endl;
				cout<<"    Y88888P   888      Y88P   88888P     Y88P   888      Y88P    88888P' "<<endl;
				cout<<"                                                                         "<<endl;
			}
		break;
		case 10 :
			{
				cout<<"  '||   ||`               '||                                "<<endl;
				cout<<"   ||   ||                 ||                                "<<endl;
				cout<<"   ||   ||  '||''| .|''|,  ||''|, .|''|, '||''| .|''|, ('''' "<<endl;
				cout<<"   ||   ||   ||    ||  ||  ||  || ||  ||  ||    ||  ||  `'') "<<endl;
				cout<<"   `|...|'  .||.   `|..|' .||..|' `|..|' .||.   `|..|' `...' "<<endl;
				cout<<endl;
			}
		break;
		default:
		break;
		
		
	}
}
