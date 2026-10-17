// undefined FUN_0811abac(void)
// entry 0x811abac


undefined4 FUN_0811abac(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  pcVar7 = (char *)(param_1 + DAT_0811ac20);
  if (*pcVar7 == '\0') {
    *(undefined1 *)(param_1 + 0xdd3) = 0;
    *(undefined1 *)(param_1 + 0xddb) = 0;
    *pcVar7 = *pcVar7 + '\x01';
  }
  FUN_080025d8(0x16);
  FUN_0811b0a8(param_1);
  if ((*(ushort *)(DAT_0811ac24 + 4) & 2) != 0) {
    FUN_080027b8(param_1 + DAT_0811ac28,DAT_0811ac2c,0x15,0,0);
    FUN_08001f1c(param_1 + DAT_0811ac30,(*DAT_0811ac34 & 0x1f00) << 3,0x1000);
    FUN_08002b10(3);
    *(undefined1 *)(param_1 + 3) = 2;
    *pcVar7 = '\0';
    return in_lr;
  }
  if ((*(ushort *)(DAT_0811ac24 + 6) & 0x40) == 0) {
    if ((*(ushort *)(DAT_0811ac24 + 6) & 0x80) == 0) goto LAB_0811aca6;
    if (*(byte *)(param_1 + 0xdd3) + 1 < (uint)*(byte *)(param_1 + 0xdda)) {
      FUN_08002b10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + '\x01';
      goto LAB_0811aca6;
    }
    if (*(char *)(param_1 + 0xddd) == '\0') goto LAB_0811aca6;
    FUN_08002b10(1);
    cVar3 = *(char *)(param_1 + 0xddb) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0xdd3) != '\0') {
      FUN_08002b10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + -1;
      goto LAB_0811aca6;
    }
    if (*(char *)(param_1 + 0xddc) == '\0') goto LAB_0811aca6;
    FUN_08002b10(1);
    cVar3 = *(char *)(param_1 + 0xddb) + -1;
  }
  *(char *)(param_1 + 0xddb) = cVar3;
LAB_0811aca6:
  FUN_0811b0a8(param_1);
  iVar2 = DAT_0811acc4;
  iVar1 = DAT_0811acbc;
  uVar6 = 0;
  puVar4 = (ushort *)(DAT_0811acc0 + DAT_0811acbc);
  do {
    if (5 < uVar6) {
LAB_0811ad0a:
      FUN_0811b154(param_1);
      FUN_0810d85c((uint)*(ushort *)(DAT_0811ad34 + 0xf8) + DAT_0811ad38,1,0x12);
      return in_lr;
    }
    pbVar5 = (byte *)(param_1 + DAT_0811ad30 + uVar6);
    if (*pbVar5 == 0xff) {
      if (uVar6 == 0) {
        FUN_0810d85c((uint)*puVar4 + iVar2,3,2);
      }
      goto LAB_0811ad0a;
    }
    FUN_0810d85c((uint)*(ushort *)((*pbVar5 + 0x118) * 2 + iVar1) + iVar2,3,uVar6 * 2 + 2);
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
}


