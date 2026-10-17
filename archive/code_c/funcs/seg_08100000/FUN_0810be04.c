// undefined FUN_0810be04(void)
// entry 0x810be04


undefined4 FUN_0810be04(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  FUN_0801cf00(param_1,DAT_0810be54);
  iVar1 = DAT_0810be58;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + DAT_0810be58 + 2) = 0;
  puVar2 = (undefined4 *)((uint)*(byte *)(*(int *)(param_1 + 0x28) + iVar1 + 2) * 8 + DAT_0810be5c);
  uVar3 = puVar2[1];
  *(undefined4 *)(param_1 + 0x54) = *puVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  return in_lr;
}


