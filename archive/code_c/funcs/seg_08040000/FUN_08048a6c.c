// undefined FUN_08048a6c(void)
// entry 0x8048a6c


undefined4 FUN_08048a6c(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = FUN_08041318(iVar5,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08048ae0);
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar4 = *(undefined4 *)(*piVar3 + 0xc);
      goto LAB_08048c40;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(iVar5 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x400;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = DAT_08048b40;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      uVar4 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (*(int *)(iVar5 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        uVar4 = DAT_08048c4c;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        uVar4 = DAT_08048c4c;
      }
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08048c50,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08048c54;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0803aa4c(iVar5);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & DAT_08048c58) == 0)) &&
     (sVar2 = FUN_08048cec(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar2 == 0)) {
    return in_lr;
  }
  FUN_080d0c88(1,param_1 + 0x54);
  FUN_08002b10(0x35);
  FUN_08005784(param_1 + 0x74,DAT_08048c5c);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08048c60);
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar4 = *(undefined4 *)(*piVar3 + 8);
LAB_08048c40:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}


