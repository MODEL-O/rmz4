// undefined FUN_08107938(void)
// entry 0x8107938


undefined4 FUN_08107938(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081079b4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    FUN_0801cf00(param_1,0xf600);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08107aa0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x5a00;
    if (*(int *)(*(int *)(param_1 + 0x2c) + DAT_08107aa4 + 0x68) == 0xff) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x11);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_081079b8,param_1 + 0x54,0x80);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_081079bc;
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar2 = *(int *)(param_1 + 0x54) + DAT_081079c0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + 0x3000;
    }
    *(int *)(param_1 + 0x54) = iVar2;
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined1 *)(param_1 + 0xb5) = 0;
      FUN_0801cf00(param_1,0xf600);
    }
    else {
      *(char *)(param_1 + 0xb5) = *(char *)(*(int *)(param_1 + 0x28) + 0xb5) + '\x01';
      FUN_0801cfc8(param_1,0xf600,(short)*(char *)(*(int *)(param_1 + 0x28) + 0x71),
                   (short)*(char *)(*(int *)(param_1 + 0x28) + 0x72));
    }
    if (*(int *)(*(int *)(param_1 + 0x2c) + DAT_08107a48 + 0x3c) == 0) {
      iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(*(int *)(param_1 + 0x2c) + DAT_08107a48 + -4));
      *(uint *)(param_1 + 0x58) = iVar2 + (uint)*(byte *)(param_1 + 0xb5) * -0x1800 + DAT_08107a4c;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    *(undefined1 *)(param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xb6) = 0;
    *(undefined1 *)(param_1 + 0xb7) = 0;
  }
  return in_lr;
}


