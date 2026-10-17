// undefined FUN_08104d04(void)
// entry 0x8104d04


undefined4 FUN_08104d04(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08104d5c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = (bVar1 | 3) & 0xfe | 4;
    FUN_08005760(param_1 + 0x74,DAT_08104d60,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(byte *)(param_1 + 10) = bVar1 | 7;
      uVar3 = DAT_08104d78;
    }
    else {
      *(byte *)(param_1 + 10) = bVar1 | 7;
      uVar3 = DAT_08104dd4;
    }
    FUN_08005760(param_1 + 0x74,uVar3,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_0801cf00(param_1,0xbd00);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0xb4) = 1;
    *(undefined1 *)(param_1 + 0xb5) = 0;
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined1 *)(param_1 + 0xb4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_08104dd8(param_1);
  return in_lr;
}


