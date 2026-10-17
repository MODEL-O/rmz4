// undefined FUN_08105418(void)
// entry 0x8105418


undefined4 FUN_08105418(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08105474);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar1 = DAT_08105478;
    *(undefined1 *)(iVar2 + 9) = 0x4f;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x13c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined4 *)(iVar2 + 0x28) = param_3;
  }
  return in_lr;
}


