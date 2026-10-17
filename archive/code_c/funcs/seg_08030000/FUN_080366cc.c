// undefined FUN_080366cc(void)
// entry 0x80366cc


undefined4 FUN_080366cc(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(param_1 + DAT_0803673c) = *(byte *)(param_1 + DAT_0803673c) | 4;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08036744) * 4 + DAT_08036740)
                );
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_080366f4,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_08036710,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


