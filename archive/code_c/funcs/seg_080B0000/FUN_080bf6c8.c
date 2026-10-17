// undefined FUN_080bf6c8(void)
// entry 0x80bf6c8


undefined4 FUN_080bf6c8(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined2 auStack_24 [4];
  byte abStack_1c [4];
  
  FUN_08129258(auStack_24,DAT_080bf76c,8);
  FUN_08129258(abStack_1c,DAT_080bf770,4);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bf774);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x5c) = DAT_080bf778;
  FUN_0801ce54(param_1,2,0);
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x52) = auStack_24[uVar4];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  bVar3 = abStack_1c[uVar4];
  if (bVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar3 = bVar3 & 1;
  *(byte *)(param_1 + 0x4d) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar3 << 5;
  FUN_0801cf00(param_1,0x2b00);
  if (uVar4 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080bf7e4,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_080bf58c(param_1,param_1 + 0x54,1,2);
  }
  else if (uVar4 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080bf82c,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_080bf58c(param_1,param_1 + 0x54,1,3);
  }
  FUN_080bf830(param_1);
  return in_lr;
}


