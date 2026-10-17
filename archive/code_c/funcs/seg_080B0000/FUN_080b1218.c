// undefined FUN_080b1218(void)
// entry 0x80b1218


undefined4 FUN_080b1218(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801ce54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b1304);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cf00(param_1,0xb900);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b1308,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b130c;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  iVar3 = DAT_080b1310;
  *(int *)(param_1 + 0xbc) =
       (*(int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080b1310) + 0x10) * 0x100;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (1 < *(byte *)(param_1 + 0x11)) {
    uVar2 = FUN_080b1008(param_1 + 0x54,
                         (ushort)*(byte *)(param_1 + 0x10) << 8 | *(byte *)(param_1 + 0x11) - 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x140;
  *(undefined4 *)(param_1 + 0x60) = 0x140;
  *(undefined4 *)(param_1 + 0xb8) = 0x900;
  if (*(byte *)(param_1 + 0x10) < 2) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + iVar3) * -0x100;
    *(undefined4 *)(param_1 + 0xb4) = DAT_080b1314;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + iVar3) * 0x100;
    *(undefined4 *)(param_1 + 0xb4) = 0x800;
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x60) = DAT_080b1368;
    *(undefined4 *)(param_1 + 0xb8) = DAT_080b136c;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_080b108c(param_1);
  return in_lr;
}


