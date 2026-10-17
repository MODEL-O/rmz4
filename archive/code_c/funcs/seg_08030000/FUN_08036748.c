// undefined FUN_08036748(void)
// entry 0x8036748


undefined4 FUN_08036748(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08036770) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_0803678c,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_080367ac,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08036774) = 1;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_080367b0(param_1);
  }
  return in_lr;
}


