// undefined FUN_0803501c(void)
// entry 0x803501c


undefined4 FUN_0803501c(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(DAT_08035080 + param_1) = *(byte *)(DAT_08035080 + param_1) | 4;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(DAT_08035088 + param_1) * 4 + DAT_08035084)
                );
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_0801cfc8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}


