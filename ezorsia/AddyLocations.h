#pragma once
//const DWORD dwDInput8DLLInject = 0x00796357; 
const DWORD dwMovementFlushInterval = 0x006B8491;
//const DWORD dwStatWndOnStatChange = 0x00A20213;
const DWORD dwUserEmoteCoolTime = 0x00A2DC70;
const DWORD dwUserGivePopularityCoolTime = 0x00A2D6E3;
const DWORD dwMessageChatDelay = 0x0049012D;
const DWORD dwMessageChatSpam = 0x004900E3;
const DWORD dwRemoteAddress = 0x00BA5784;
const DWORD dwIGCipherHash = 0x00A5908F; //related to packet encryption, not used, kept for reference
const DWORD dwIGCipherVirtual1 = 0x00A59124;
const DWORD dwIGCipherVirtual2 = 0x00A59209;
const DWORD dwIGCipherDecrypt = 0x00A5918C;
const DWORD dwIGCipherDecryptStr = 0x00A59241;
const DWORD dwUnlimitedSoulRush = 0x009797E8;
const DWORD dwUnlimitedFJ = 0x00979794;
const DWORD dwUnlimitedFJYVector = 0x00979863;
//0x008DB181 + 1	position of the line breaks in the text displayed in this chat log //ty dream
//008DFB06 008D4B75 008D4C27 008D4CBF 008D6308 //related to vertical scrolling //ty rynyan
//005F456A version number edit //ty windy
//008DFBA0 character typing limit	//ty chris
//008C4EA2 stat window related?? //ty masterrulax
//skill tooltip extension x 008F26F3/008F26F8 y //ty rynyan
//item UI tooltip extension 008EEEAF //ty rain

// ===== Resolution Modifications =====
const DWORD dwByteAvatarMegaHPos = 0x0045B1A6;
const DWORD dwAvatarMegaWidth = 0x00459F1B;
const DWORD dwApplicationHeight = 0x00A00FA0;
const DWORD dwApplicationWidth = 0x00A00FA5;
const DWORD dwCursorVectorVPos = 0x005CA9AC;
const DWORD dwCursorVectorHPos = 0x005CA9B8;
const DWORD dwUpdateMouseLimitVPos = 0x005CB697;
const DWORD dwUpdateMouseLimitHPos = 0x005CB67E;
const DWORD dwCursorPosLimitVPos = 0x005CB10A;
const DWORD dwCursorPosLimitHPos = 0x005CB0F1;
const DWORD dwViewPortHeight = 0x009E9D20;
const DWORD dwViewPortWidth = 0x009E9E98;
const DWORD dwToolTipLimitVPos = 0x008F93CC;
const DWORD dwToolTipLimitHPos = 0x008F93B9;
const DWORD dwTempStatToolTipDraw = 0x007B9CD2;
const DWORD dwTempStatToolTipFind = 0x007B9EB8;
const DWORD dwTempStatIconVPos = 0x007B9AC9;
const DWORD dwTempStatIconHpos = 0x007B9AE7;
const DWORD dwTempStatCoolTimeVPos = 0x007B9BD2;
const DWORD dwTempStatCoolTimeHPos = 0x007B9BF0;
const DWORD dwQuickSlotInitVPos = 0x008D677E;
const DWORD dwQuickSlotInitHPos = 0x008D6785;
const DWORD dwQuickSlotVPos = 0x008E411C;  
const DWORD dwQuickSlotHPos = 0x008E4170;
const DWORD dwQuickSlotCWndVPos = 0x008E33C9;
const DWORD dwQuickSlotCWndHPos = 0x008E33C0;
const DWORD dwBossBar = 0x00533B0E;
const DWORD dwBossBarRetn = 0x00533B15;
const DWORD dwBossBarRetn2 = 0x007E16A1;
const DWORD dwCashFix = 0x00469348;
const DWORD dwCashFixRtm = 0x0046934E;
const DWORD dwVersionNumberFix = 0x00628EFB;
const DWORD dwVersionNumberFixRtm = 0x00628F04;
const int dwVersionNumberFixNOPs = 9;
const DWORD dwAlwaysViewRestoreFix = 0x0066E8A8;
const DWORD dwAlwaysViewRestorerFixRtm = 0x0066E8AF;
const int dwAlwaysViewRestoreFixNOPs = 7;

//const DWORD dwloginFrameFix = 0x005F4C11;
//const DWORD dwloginFrameFixCall = 0x009DE4D2;
//const int loginFrameFixNOPs = 5;

const DWORD dwLoginBackCanvasFix = 0x0063B46B;
const DWORD dwLoginBackCanvasFixRetn = 0x0063B476;
const int LoginBackCanvasFixNOPs = 11;

const DWORD dwLoginViewRecFix = 0x0064C799;
const DWORD dwLoginViewRecFixRetn = 0x0064C7A4;
const int LoginViewRecFixNOPs = 11;

const DWORD dwLoginBackBtnFix = 0x0060E69D;	//not used, kept for referrence
const DWORD dwLoginBackBtnFixRetn = 0x0060E6A4;
const int LoginBackBtnFixNOPs = 7;

const DWORD dwInitialLoginScreenBackXY = 0x005F4B48;	//not used, kept for referrence, resets on back step from next step

const DWORD dwLoginDescriptorFix = 0x0063ABD6;
const DWORD dwLoginDescriptorFixRetn = 0x0063AC09;
const int LoginDescriptorFixNOPs = 51;

const DWORD dwMoreGainMsgs = 0x008AC37C;
const DWORD dwMoreGainMsgsRetn = 0x008AC382;
const int MoreGainMsgsNOPs = 6;

const DWORD dwMoreGainMsgsFade = 0x008AC75A;
const DWORD dwMoreGainMsgsFadeRetn = 0x008AC761;
const int MoreGainMsgsFadeNOPs = 7;

const DWORD dwMoreGainMsgsFade1 = 0x008AC6DD;
const DWORD dwMoreGainMsgsFade1Retn = 0x008AC6E2;
const int MoreGainMsgsFade1NOPs = 5;

const DWORD dwMuruengraidPlayer = 0x0056BE27;
const DWORD dwMuruengraidPlayerRetn = 0x0056BE2F;
const int MuruengraidPlayerNOPs = 8;

const DWORD dwMuruengraidClock = 0x0056BEAF;
const DWORD dwMuruengraidClockRetn = 0x0056BEB7;
const int MuruengraidClockNOPs = 8;

const DWORD dwMuruengraidMonster = 0x0056BF35;
const DWORD dwMuruengraidMonsterRetn = 0x0056BF3D;
const int MuruengraidMonsterNOPs = 8;

const DWORD dwMuruengraidMonster1 = 0x0056C1D7;
const DWORD dwMuruengraidMonster1Retn = 0x0056C1DE;
const int MuruengraidMonster1NOPs = 7;

const DWORD dwMuruengraidMonster2 = 0x0056C262;
const DWORD dwMuruengraidMonster2Retn = 0x0056C269;
const int MuruengraidMonster2NOPs = 7;

const DWORD dwMuruengraidEngBar = 0x0056C2ED;
const DWORD dwMuruengraidEngBarRetn = 0x0056C2F2;
const int MuruengraidEngBarNOPs = 5;

const DWORD dwMuruengraidEngBar1 = 0x0056BFC0;
const DWORD dwMuruengraidEngBar1Retn = 0x0056BFC8;
const int MuruengraidEngBar1NOPs = 8;

const DWORD dwMuruengraidEngBar2 = 0x0056C04B;
const DWORD dwMuruengraidEngBar2Retn = 0x0056C050;
const int MuruengraidEngBar2NOPs = 5;

const DWORD dwMuruengraidClearRoundUI = 0x0043CBC8;	//; int __cdecl sub_43E86F(int, wchar_t *, int, int, int, int, int, int, int, int)
const DWORD dwMuruengraidClearRoundUIRetn = 0x0043CBD2;	//may be used to fix other cases of pop-up UI misallignment
const int MuruengraidClearRoundUINOPs = 10;

const DWORD dwMuruengraidTimerCanvas = 0x0056D0FA;
const DWORD dwMuruengraidTimerCanvasRetn = 0x0056D0FF;
const int MuruengraidTimerCanvasNOPs = 5;

const DWORD dwMuruengraidTimerMinutes = 0x0056D4B2;
const DWORD dwMuruengraidTimerMinutesRetn = 0x0056D4BB;
const int MuruengraidTimerMinutesNOPs = 9;

const DWORD dwMuruengraidTimerSeconds = 0x0056D4CC;
const DWORD dwMuruengraidTimerSecondsRetn = 0x0056D4D2;
const int MuruengraidTimerSecondsNOPs = 6;

const DWORD dwMuruengraidTimerBar = 0x0056D327;
const DWORD dwMuruengraidTimerBarRetn = 0x0056D32E;
const int MuruengraidTimerBarNOPs = 7;

const DWORD dwMuruengraidMonster1_2 = 0x0056C989;
const DWORD dwMuruengraidMonster1_2Retn = 0x0056C98E;
const int MuruengraidMonster1_2NOPs = 5;

const DWORD dwStatsSubMov = 0x008CA788;
const DWORD dwStatsSubMovRetn = 0x008CA78D;
const int StatsSubMovNOPs = 5;

//beginning of packed client run addies //CwvsAppSetup?? //CWvsAppInitializeInput?? //CWvsAppCallUpdate?? //CClientSocketConnect??
const DWORD dwCLoginSendCheckPasswordPacket = 0x005F6994;
const DWORD dwCLoginSendCheckPasswordPacketRetn = 0x005F6B5D;
const int CLoginSendCheckPasswordPacketNops = 6;

const DWORD dw0x0044E550 = 0x0044E550;
const DWORD dw0x0044E550Retn = 0x0044E562;
const int dw0x0044E550Nops = 18;

const DWORD dw0x0044E5BE = 0x0044E5BE;
const DWORD dw0x0044E5BERetn = 0x0044E5D0;
const int dw0x0044E5BENops = 18;

const DWORD dw0x0044E5DB = 0x0044E5DB;
const DWORD dw0x0044E5DBRetn = 0x0044E5ED;
const int dw0x0044E5DBNops = 18;

const DWORD dw0x0044E6AC = 0x0044E6AC;
const DWORD dw0x0044E6ACRetn = 0x0044E6BE;
const int dw0x0044E6ACNops = 18;

const DWORD dw0x0044E71D = 0x0044E71D;
const DWORD dw0x0044E71DRetn = 0x0044E72F;
const int dw0x0044E71DNops = 18;

const DWORD dw0x0044E80C = 0x0044E80C;
const DWORD dw0x0044E80CRetn = 0x0044E81E;
const int dw0x0044E80CNops = 18;

const DWORD dw0x0044E8B4 = 0x0044E8B4;
const DWORD dw0x0044E8B4Retn = 0x0044E8C6;
const int dw0x0044E8B4Nops = 18;

const DWORD dw0x0044EA22 = 0x0044EA22;
const DWORD dw0x0044EA22Retn = 0x0044EA37;
const int dw0x0044EA22Nops = 19;

const DWORD dw0x0044EA6F = 0x0044EA6F;
const DWORD dw0x0044EA6FRetn = 0x0044EA81;
const int dw0x0044EA6FNops = 18;

const DWORD dw0x0044EBD6 = 0x0044EBD6;
const DWORD dw0x0044EBD6Retn = 0x0044EBE8;
const int dw0x0044EBD6Nops = 18;

const DWORD dw0x0044ECA1 = 0x0044ECA1;
const DWORD dw0x0044ECA1Retn = 0x0044ECB3;
const int dw0x0044ECA1Nops = 18;

const DWORD dw0x0044ED32 = 0x0044ED32;
const DWORD dw0x0044ED32Retn = 0x0044ED44;
const int dw0x0044ED32Nops = 18;

const DWORD dw0x0044ED52 = 0x0044ED52;
const DWORD dw0x0044ED52Retn = 0x0044ED64;
const int dw0x0044ED52Nops = 18;

const DWORD dw0x0044EED3 = 0x0044EED3;
const DWORD dw0x0044EED3Retn = 0x0044EEE3;
const int dw0x0044EED3Nops = 16;
//start of 494 bloc
const DWORD dw0x00494943 = 0x00494943;
const DWORD dw0x00494943Retn = 0x00494955;
const int dw0x00494943Nops = 18;

const DWORD dw0x00494BB6 = 0x00494BB6;
const DWORD dw0x00494BB6Retn = 0x00494BC8;
const int dw0x00494BB6Nops = 18;

const DWORD dw0x00494CA9 = 0x00494CA9;
const DWORD dw0x00494CA9Retn = 0x00494CBB;
const int dw0x00494CA9Nops = 18;

const DWORD dw0x00494CF0 = 0x00494CF0;
const DWORD dw0x00494CF0Retn = 0x00494D02;
const int dw0x00494CF0Nops = 18;

const DWORD dw0x00494D3B = 0x00494D3B;
const DWORD dw0x00494D3BRetn = 0x00494DEF;
const int dw0x00494D3BNops = 18;

const DWORD dw0x00494EAF = 0x00494EAF;
const DWORD dw0x00494EAFRetn = 0x00494ECA;
const int dw0x00494EAFNops = 27;

const DWORD dw0x00494EEC = 0x00494EEC;
const DWORD dw0x00494EECRetn = 0x00494EFE;
const int dw0x00494EECNops = 18;

const DWORD dw0x00494F87 = 0x00494F87;
const DWORD dw0x00494F87Retn = 0x00494F99;
const int dw0x00494F87Nops = 18;
//start of 009F bloc
const DWORD dw0x009F4E84 = 0x009F4E84;
const DWORD dw0x009F4E84Retn = 0x009F4E96;
const int dw0x009F4E84Nops = 18;

const DWORD dw0x009F4EC3 = 0x009F4EC3;
const DWORD dw0x009F4EC3Retn = 0x009F4ED5;
const int dw0x009F4EC3Nops = 18;

const DWORD dw0x009F4F12 = 0x009F4F12;
const DWORD dw0x009F4F12Retn = 0x009F4F24;
const int dw0x009F4F12Nops = 18;

const DWORD dw0x009F4FC6 = 0x009F4FC6;
const DWORD dw0x009F4FC6Retn = 0x009F4FD8;
const int dw0x009F4FC6Nops = 18;

const DWORD dw0x009F503C = 0x009F503C;
const DWORD dw0x009F503CRetn = 0x009F504E;
const int dw0x009F503CNops = 18;

const DWORD dw0x009F51A7 = 0x009F51A7;
const DWORD dw0x009F51A7Retn = 0x009F51B7;
const int dw0x009F51A7Nops = 16;

const DWORD dw0x009F526F = 0x009F526F;
const DWORD dw0x009F526FRetn = 0x009F55D8;
const int dw0x009F526FNops = 19;

const DWORD dw0x009F5653 = 0x009F5653;
const DWORD dw0x009F5653Retn = 0x009F5667;
const int dw0x009F5653Nops = 20;

const DWORD dw0x009F5833 = 0x009F5833;
const DWORD dw0x009F5833Retn = 0x009F5AA2;
const int dw0x009F5833Nops = 18;

const DWORD dw0x009F5C2C = 0x009F5C2C;
const DWORD dw0x009F5C2CRetn = 0x009F5C41;
const int dw0x009F5C2CNops = 21;

const DWORD dw0x009F5CA3 = 0x009F5CA3;	//dwCWvsAppRun
const DWORD dw0x009F5CA3Retn = 0x009F5FDB;
const int dw0x009F5CA3Nops = 18;

const DWORD dw0x009F5FBD = 0x009F5FBD;
const DWORD dw0x009F5FBDRetn = 0x009F5FDB;
const int dw0x009F5FBDNops = 30;

const DWORD dw0x009F631C = 0x009F631C;
const DWORD dw0x009F631CRetn = 0x009F632E;
const int dw0x009F631CNops = 18;

const DWORD dw0x009F691F = 0x009F691F;
const DWORD dw0x009F691FRetn = 0x009F6945;
const int dw0x009F691FNops = 38;

const DWORD dw0x009F6F36 = 0x009F6F36;
const DWORD dw0x009F6F36Retn = 0x009F6F48;
const int dw0x009F6F36Nops = 18;

const DWORD dw0x009F6F5C = 0x009F6F5C;
const DWORD dw0x009F6F5CRetn = 0x009F6F6E;
const int dw0x009F6F5CNops = 18;

const DWORD dw0x009F7CFA = 0x009F7CFA;
const DWORD dw0x009F7CFARetn = 0x009F7D0C;
const int dw0x009F7CFANops = 18;

const DWORD dw0x009F7D83 = 0x009F7D83;
const DWORD dw0x009F7D83Retn = 0x009F8210;
const int dw0x009F7D83Nops = 5;

const DWORD dw0x009F81FB = 0x009F81FB;
const DWORD dw0x009F81FBRetn = 0x009F8210;
const int dw0x009F81FBNops = 21;

const DWORD dw0x009F84E9 = 0x009F84E9;
const DWORD dw0x009F84E9Retn = 0x009F84FB;
const int dw0x009F84E9Nops = 18;

const DWORD dw0x009F8AD4 = 0x009F8AD4;
const DWORD dw0x009F8AD4Retn = 0x009F8AEE;
const int dw0x009F8AD4Nops = 26;
//start of 00A4B bloc
const DWORD dw0x00A4BB39 = 0x00A4BB39;
const DWORD dw0x00A4BB39Retn = 0x00A4BB4B;
const int dw0x00A4BB39Nops = 18;

const DWORD dw0x00A4BC79 = 0x00A4BC79;
const DWORD dw0x00A4BC79Retn = 0x00A4BC89;
const int dw0x00A4BC79Nops = 16;

const DWORD dw0x00A4BD05 = 0x00A4BD05;
const DWORD dw0x00A4BD05Retn = 0x00A4BD17;
const int dw0x00A4BD05Nops = 18;

const DWORD dw0x00A4BD4E = 0x00A4BD4E;
const DWORD dw0x00A4BD4ERetn = 0x00A4BD60;
const int dw0x00A4BD4ENops = 18;

const DWORD dw0x00A4BD99 = 0x00A4BD99;
const DWORD dw0x00A4BD99Retn = 0x00A4BDAB;
const int dw0x00A4BD99Nops = 18;

const DWORD dw0x00A4BDE3 = 0x00A4BDE3;
const DWORD dw0x00A4BDE3Retn = 0x00A4BDF5;
const int dw0x00A4BDE3Nops = 18;

const DWORD dw0x00A4BDFE = 0x00A4BDFE;
const DWORD dw0x00A4BDFERetn = 0x00A4BE10;
const int dw0x00A4BDFENops = 18;

const DWORD dw0x00A4BE47 = 0x00A4BE47;
const DWORD dw0x00A4BE47Retn = 0x00A4BE59;
const int dw0x00A4BE47Nops = 18;

//addresses hooked by CRCbypassed v83 version to redirect to their section. may be incomplete
//0x0044E550 //0x0044E5DB //0x0044E71D //0x0044E8B4 //0x0044EA6F //0x0044ECA1 //0x0044ED52 //0x00494D3B //0x00494EEC //0x009F4E84
//0x009F4F12 //0x009F503C //0x009F526F //0x009F6F36 //0x009F7CFA //0x009F84E9 //0x00A4BDFE //0x00A4BD99 //0x00A4BD05 //0x00A4BB39

//my cash shop fix
const DWORD dwCashFix1 = 0x00468EDA;
const DWORD dwCashFix1Rtm = 0x00468EE6;
const DWORD dwITCFix1Rtm = 0x005D4105;
const int dwCashFix1NOPs = 12;
const DWORD dwCashFix2 = 0x00468EF5;
const DWORD dwCashFix2Rtm = 0x00468F02;
const DWORD dwITCFix2Rtm = 0x005D411E;
const int dwCashFix2NOPs = 13;
const DWORD dwCashFix3 = 0x00468F11;
const DWORD dwCashFix3Rtm = 0x00468F21;
const DWORD dwITCFix3Rtm = 0x005D413A;
const int dwCashFix3NOPs = 16;
const DWORD dwCashFix4 = 0x00468F30;
const DWORD dwCashFix4Rtm = 0x00468F3E;
const DWORD dwITCFix4Rtm = 0x005D4159;
const int dwCashFix4NOPs = 14;
const DWORD dwCashFix5 = 0x00468F4D;
const DWORD dwCashFix5Rtm = 0x00468F5E;
const DWORD dwITCFix5Rtm = 0x005D4177;
const int dwCashFix5NOPs = 17;
const DWORD dwCashFix6 = 0x00468F6D;
const DWORD dwCashFix6Rtm = 0x00468F79;
const DWORD dwITCFix6Rtm = 0x005D4194;
const int dwCashFix6NOPs = 12;
const DWORD dwCashFix7 = 0x00468F8D;
const DWORD dwCashFix7Rtm = 0x00468F9E;
const DWORD dwITCFix7Rtm = 0x005D41B7;
const int dwCashFix7NOPs = 17;
const DWORD dwCashFix8 = 0x00468FAD;
const DWORD dwCashFix8Rtm = 0x00468FB8;
const DWORD dwITCFix8Rtm = 0x005D41D7;
const int dwCashFix8NOPs = 11;
const DWORD dwCashFix9 = 0x0046C2CF;
const DWORD dwCashFix9Rtm = 0x0046C2E0;
const int dwCashFix9NOPs = 17;
const DWORD dwCashFixOnOff = 0x0077F319;
const DWORD dwCashFixOnOffRtm = 0x0077F31E;
const DWORD dwCashFixOnOffCall = 0x00472BCC;
const int dwCashFixOnOffNOPs = 5;
//const DWORD dwCashFixOnOffCall2 = 0x00BEC20C;
const DWORD dwCashFixPrev = 0x004AF4F8;
const DWORD dwCashFixPrevRtm = 0x004AF506;
const int dwCashFixPrevNOPs = 14;

// ===== Unlimited Teleport =====
const DWORD dwTeleFieldLimit = 0x00957BB7;
const DWORD dwTeleUpdateTime = 0x00957BFE;
const DWORD dwTeleFootholdAbove = 0x00957EFC;
const DWORD dwTeleFootholdBelow = 0x00957ED9;
const DWORD dwTeleIsPortal = 0x00957C25;

// ===== Status Bar =====
const DWORD dwStatusBarVPos = 0x008D4C7F;
const DWORD dwStatusBarPosRetn = 0x008D4C84;

const DWORD dwStatusBarBackgroundVPos = 0x008D6F54;
const DWORD dwStatusBarBackgroundPosRetn = 0x008D6F59;

const DWORD dwStatusBarInputVPos = 0x008D7160;
const DWORD dwStatusBarInputPosRetn = 0x008D716B;

// ===== Login Screen =====
const DWORD dwLoginCreateDlg = 0x006203E8;
const DWORD dwLoginCreateDlgRtn = 0x006203F6;

const DWORD dwLoginUsername = 0x006209A6;
const DWORD dwLoginUsernameRtn = 0x006209B1;

const DWORD dwLoginPassword = 0x00620A0D;
const DWORD dwLoginPasswordRtn = 0x00620A15;

const DWORD dwLoginInputBackgroundColor = 0x0062094F;
const DWORD dwLoginInputFontColor = 0x00620930;
const DWORD dwLoginLoginBtn = 0x00620644;
const DWORD dwLoginFindPasswordBtn = 0x006207AF;
const DWORD dwLoginQuitBtn = 0x00620917;
const DWORD dwLoginFindIDBtn = 0x00620735;
const DWORD dwLoginSaveIDBtn = 0x006206BE;
const DWORD dwLoginWebHomeBtn = 0x006208A0;
const DWORD dwLoginWebRegisterBtn = 0x00620829;