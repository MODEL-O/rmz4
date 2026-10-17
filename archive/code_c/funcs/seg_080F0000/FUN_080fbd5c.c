// undefined FUN_080fbd5c(void)
// entry 0x80fbd5c


undefined4 FUN_080fbd5c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080fbdc0);
  if (((int)(uint)*(byte *)((uVar3 >> 3) + DAT_080fbdbc + 4) >> (uVar3 & 7) & 1U) == 0) {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    FUN_0801cf00(param_1,0x7100);
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080fbe64,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined4 *)(param_1 + 0x30) = DAT_080fbe68;
    *(undefined2 *)(param_1 + 0x26) = 1;
    uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fbe6c);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_080fbe70(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fbdc4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


