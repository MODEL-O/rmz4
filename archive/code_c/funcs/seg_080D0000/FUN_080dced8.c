// undefined FUN_080dced8(void)
// entry 0x80dced8


undefined4 FUN_080dced8(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0801cf00(param_1,DAT_080dcfc0);
    uVar2 = DAT_080dcfc8 * *DAT_080dcfc4 + DAT_080dcfcc;
    *DAT_080dcfc4 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = DAT_080dcfd0 - ((uVar2 & 0x7fffffff) >> 0x10 & 0x3f);
    uVar1 = 0xfb;
  }
  else {
    FUN_0801cf00(param_1,DAT_080dcf1c);
    uVar2 = *DAT_080dcf20 * DAT_080dcf24 + DAT_080dcf28;
    *DAT_080dcf20 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = ((uVar2 & 0x7fffffff) >> 0x10 & 0x3f) + 0x100;
    uVar1 = 5;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar2 = *DAT_080dcfc4 * DAT_080dcfc8 + DAT_080dcfcc;
  *DAT_080dcfc4 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (((uVar2 & 0x7fffffff) >> 0x10 & 3) + 8) * -0x40;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dcfd4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080dcdd8(param_1);
  return in_lr;
}


