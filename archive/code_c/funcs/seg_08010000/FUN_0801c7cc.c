// undefined FUN_0801c7cc(void)
// entry 0x801c7cc


undefined4 FUN_0801c7cc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_080054b4();
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == param_1 + 0x14) break;
    FUN_08128f80(iVar1,*(undefined4 *)(iVar1 + 0x14));
    if ((*(byte *)(iVar1 + 0xb) & 8) != 0) {
      FUN_08008d04(*(undefined1 *)(iVar1 + 0x1c),*(undefined2 *)(iVar1 + 0x26),iVar1 + 0x54,
                   *(undefined4 *)(iVar1 + 0x30));
    }
  }
  return in_lr;
}


