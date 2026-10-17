// undefined FUN_080ff37c(void)
// entry 0x80ff37c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080ff37c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080ff434);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,_FUN_080ff438,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = uRam080ff43c;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = 0x886b5dc;
  *(undefined2 *)(param_1 + 0x26) = 0xf;
  iVar1 = *(int *)(param_1 + 0x58) + 0x2000;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 8;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + 0x88692fc) + 4);
  FUN_080ff134(param_1);
  return in_lr;
}


