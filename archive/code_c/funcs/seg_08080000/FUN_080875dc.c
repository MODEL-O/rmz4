// undefined FUN_080875dc(void)
// entry 0x80875dc


undefined4 FUN_080875dc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  uint local_10;
  
  if (*(byte *)(param_1 + 0xf) == 0) {
    local_14 = 0x800;
    local_10 = (uint)*(byte *)(param_1 + 0xf);
    FUN_08088ff0(param_1 + 0x54,&local_14,3,4);
    FUN_08005784(param_1 + 0x74,DAT_0808763c);
    FUN_0801cf00(param_1,0x1d00);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = FUN_08088c9c(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


