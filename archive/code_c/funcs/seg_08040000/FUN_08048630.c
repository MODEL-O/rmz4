// undefined FUN_08048630(void)
// entry 0x8048630


undefined8 FUN_08048630(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    uVar5 = 0;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_080487c2;
    cVar1 = FUN_08041318(iVar6,param_1 + 0x54);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(iVar6 + 0x54)) {
          *(undefined4 *)(param_1 + 0x5c) = DAT_080486c4;
          goto LAB_080486f6;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
LAB_080486d2:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_080486d2;
LAB_080486f6:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = DAT_080487cc;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_080487d0,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_080487d4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0803aa4c(iVar6);
      *(undefined1 *)(param_1 + 0xbd) = 1;
      *(undefined1 *)(param_1 + 0xd) = 1;
      goto LAB_0804874c;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080486a4);
    uVar5 = 3;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
LAB_0804874c:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar2 = FUN_080488e4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if ((((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) && (sVar2 == 0)) &&
       (uVar5 = 0, (*(uint *)(param_1 + 0x8c) & 0x1000) == 0)) goto LAB_080487c2;
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x35);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080487d8);
    uVar5 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)(*piVar3 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
LAB_080487c2:
  return CONCAT44(uVar5,in_lr);
}


