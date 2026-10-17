// undefined FUN_080f8284(void)
// entry 0x80f8284


undefined4 FUN_080f8284(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x7200);
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080f82c8;
  *(undefined2 *)(param_1 + 0x26) = 1;
  iVar1 = DAT_080f830c;
  iVar2 = DAT_080f8304;
  iVar5 = DAT_080f8308;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = DAT_080f82cc;
    iVar5 = DAT_080f82d0;
  }
  uVar3 = FUN_08129120(*(undefined1 *)(iVar2 + iVar5),3);
  puVar4 = (undefined4 *)((uVar3 & 0xff) * 8 + (uint)*(byte *)(param_1 + 0x11) * 0x28 + iVar1);
  uVar6 = puVar4[1];
  *(undefined4 *)(param_1 + 0x54) = *puVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  return in_lr;
}


