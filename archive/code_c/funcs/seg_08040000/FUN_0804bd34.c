// undefined FUN_0804bd34(void)
// entry 0x804bd34


undefined4 FUN_0804bd34(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804be28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0804be2c);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar1 = DAT_0804be30;
  FUN_08005760(param_1 + 0x74,DAT_0804be30,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0804be34;
  iVar5 = FUN_0803a4a8(uVar3);
  uVar6 = iVar5 + 4U & 0xff;
  cVar2 = FUN_08038a78(uVar3);
  if (cVar2 != '\0') {
    uVar6 = (iVar5 + 4U & 0x7f) << 1;
  }
  FUN_08005794(param_1 + 0x74,uVar1,uVar6,0xffffffff,0xffffffff,0xffffffff);
  iVar5 = DAT_0804be38;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_0804be38) << 2;
  *(int *)(param_1 + 0x60) = (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar5) << 2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  FUN_0804be3c(param_1);
  return in_lr;
}


