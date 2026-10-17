// undefined FUN_080a3314(void)
// entry 0x80a3314


undefined4 FUN_080a3314(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x20000 + DAT_080a339c >> 0x10);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x30 + DAT_080a33a0,param_1 + 0x54,
               0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a33a4;
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080a33d8;
    *(undefined4 *)(param_1 + 0x5c) = DAT_080a33dc;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080a3406;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080a33c0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar2 = DAT_080a33c4;
    }
    else if (bVar1 == 2) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1400;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar2 = 0x100;
    }
    else {
      if (bVar1 != 3) goto LAB_080a3406;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1400;
      *(undefined4 *)(param_1 + 0x5c) = 0x100;
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
LAB_080a3406:
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3438);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080a32e4(param_1);
  return in_lr;
}


