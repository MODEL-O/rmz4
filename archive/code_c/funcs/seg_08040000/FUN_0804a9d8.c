// undefined FUN_0804a9d8(void)
// entry 0x804a9d8


undefined8 FUN_0804a9d8(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    uVar5 = 0;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_0804ab46;
    cVar1 = FUN_08041318(iVar6,param_1 + 0x54);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(iVar6 + 0x54)) {
          *(undefined4 *)(param_1 + 0x5c) = DAT_0804aa68;
          goto LAB_0804aa9a;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
LAB_0804aa76:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_0804aa76;
LAB_0804aa9a:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = DAT_0804ab50;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_0804ab54,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_0804ab58;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0803aa4c(iVar6);
      *(undefined1 *)(param_1 + 0xbd) = 1;
      *(undefined1 *)(param_1 + 0xd) = 1;
      goto LAB_0804aaf0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804aa48);
    uVar5 = 3;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
LAB_0804aaf0:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    FUN_0801cff0(param_1);
    sVar2 = FUN_0804ad60(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (((sVar2 == 0) &&
        (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 != -1)) &&
       (uVar5 = DAT_0804ab5c, (*(uint *)(param_1 + 0x8c) & DAT_0804ab5c) == 0)) goto LAB_0804ab46;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ab60);
    uVar5 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)(*piVar3 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
LAB_0804ab46:
  return CONCAT44(uVar5,in_lr);
}


