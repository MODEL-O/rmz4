// undefined FUN_0804a3c0(void)
// entry 0x804a3c0


undefined4 FUN_0804a3c0(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = FUN_08041318(iVar4,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804a434);
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar6 = *(undefined4 *)(*piVar5 + 0xc);
      goto LAB_0804a5f4;
    }
    if (*(int *)(iVar4 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(undefined1 *)(param_1 + 0xbd) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = DAT_0804a50c;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined1 *)(param_1 + 0xbd) = 0x80;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0804a510,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_0804a514;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    FUN_0803aa4c(iVar4);
    *(undefined1 *)(param_1 + 0xbe) = 1;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0x12) = 0x28;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      bVar2 = *(char *)(param_1 + 0xbd) - 4;
    }
    else {
      bVar2 = *(char *)(param_1 + 0xbd) + 4;
    }
    pbVar7 = (byte *)(param_1 + 0xbd);
    *pbVar7 = bVar2;
    iVar4 = DAT_0804a584;
    iVar8 = *(short *)((*pbVar7 + 0x40 & 0xff) * 2 + DAT_0804a584) * 4;
    *(int *)(param_1 + 0x5c) = iVar8;
    iVar4 = *(short *)((uint)*pbVar7 * 2 + iVar4) * 4;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    FUN_08005784(param_1 + 0x74,DAT_0804a600);
  }
  if (((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) &&
     (sVar3 = FUN_0804a6c4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar3 == 0)) {
    return in_lr;
  }
  FUN_080d0c88(1,param_1 + 0x54);
  FUN_08002b10(0x35);
  FUN_08005784(param_1 + 0x74,DAT_0804a604);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804a608);
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar6 = *(undefined4 *)(*piVar5 + 8);
LAB_0804a5f4:
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  return in_lr;
}


