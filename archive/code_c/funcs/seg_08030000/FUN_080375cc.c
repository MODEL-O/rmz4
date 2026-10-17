// undefined FUN_080375cc(void)
// entry 0x80375cc


undefined4 FUN_080375cc(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(param_1 + DAT_08037620) = *(byte *)(param_1 + DAT_08037620) | 4;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08037628) * 4 + DAT_08037624)
                );
  }
  else {
    FUN_0801cfc8(param_1,0x500,4,1);
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


