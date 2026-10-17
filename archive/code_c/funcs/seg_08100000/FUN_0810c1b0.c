// undefined FUN_0810c1b0(void)
// entry 0x810c1b0


undefined4 FUN_0810c1b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  FUN_0801cdbc();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined1 *)(param_1 + 0x25) = 0x11;
  *(undefined2 *)(param_1 + 0x74) =
       *(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0810c20c);
  FUN_0801cf00(param_1,*(undefined2 *)(param_1 + 0x74));
  puVar1 = (undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_0810c210);
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  return in_lr;
}


