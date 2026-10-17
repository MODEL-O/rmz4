// undefined FUN_0811a5ec(void)
// entry 0x811a5ec


undefined4 FUN_0811a5ec(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + DAT_0811a648);
  pbVar6 = (byte *)(param_1 + DAT_0811a64c);
  if (*pbVar6 == 0) {
    *(undefined1 *)(param_1 + 0xdd3) = 0;
    *(undefined1 *)(param_1 + 0xddb) = 0;
    *pbVar6 = *pbVar6 + 1;
  }
  FUN_080025d8(0x14);
  FUN_0811ae68(param_1);
  uVar1 = *(ushort *)(DAT_0811a650 + 4);
  if ((uVar1 & 2) != 0) {
    FUN_08002b10(3);
    *(undefined1 *)(param_1 + 3) = 2;
    *pbVar6 = 0;
    return in_lr;
  }
  if ((uVar1 & 1) != 0) {
    FUN_08002b10(2);
    iVar4 = param_1 + 0xdd4;
    *(undefined1 *)(iVar8 + 0xc4) = *(undefined1 *)(iVar4 + (uint)*(byte *)(param_1 + 0xdd3));
    *(undefined1 *)(param_1 + 3) = 2;
    *pbVar6 = (byte)uVar1 & 2;
    goto LAB_0811a70e;
  }
  if ((*(ushort *)(DAT_0811a650 + 6) & 0x40) == 0) {
    iVar4 = param_1 + DAT_0811a6f8;
    if ((*(ushort *)(DAT_0811a650 + 6) & 0x80) == 0) goto LAB_0811a70e;
    if (*(byte *)(param_1 + 0xdd3) + 1 < (uint)*(byte *)(param_1 + 0xdda)) {
      FUN_08002b10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + '\x01';
      goto LAB_0811a70e;
    }
    if (*(char *)(param_1 + 0xddd) == '\0') goto LAB_0811a70e;
    FUN_08002b10(1);
    cVar3 = *(char *)(param_1 + 0xddb) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0xdd3) != '\0') {
      FUN_08002b10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + -1;
      iVar4 = param_1 + DAT_0811a6ac;
      goto LAB_0811a70e;
    }
    iVar4 = param_1 + DAT_0811a6c8;
    if (*(char *)(param_1 + 0xddc) == '\0') goto LAB_0811a70e;
    FUN_08002b10(1);
    cVar3 = *(char *)(param_1 + 0xddb) + -1;
  }
  *(char *)(param_1 + 0xddb) = cVar3;
LAB_0811a70e:
  FUN_0811ae68(param_1);
  iVar2 = DAT_0811a72c;
  iVar8 = DAT_0811a728;
  puVar5 = (ushort *)(DAT_0811a728 + 0x3ac);
  for (uVar7 = 0; uVar7 < 6; uVar7 = uVar7 + 1 & 0xff) {
    if (*(byte *)(iVar4 + uVar7) == 0xff) {
      if (uVar7 != 0) break;
      FUN_0810d85c((uint)*puVar5 + iVar2,3,2);
    }
    else {
      FUN_0810d85c((uint)*(ushort *)((*(byte *)(iVar4 + uVar7) + 400) * 2 + iVar8) + iVar2,3,
                   uVar7 * 2 + 2);
    }
  }
  pbVar6 = (byte *)(iVar4 + (uint)*(byte *)(param_1 + 0xdd3));
  if (*pbVar6 == 0xff) {
    FUN_0810d85c((uint)*(ushort *)(DAT_0811a798 + DAT_0811a79c) + DAT_0811a7a0,1,0x12);
  }
  else {
    FUN_0810d85c((uint)*(ushort *)(((uint)*pbVar6 + DAT_0811a7d0) * 2 + DAT_0811a7cc) + DAT_0811a7d4
                 ,1,0x12);
  }
  return in_lr;
}


