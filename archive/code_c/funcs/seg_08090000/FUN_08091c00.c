// undefined FUN_08091c00(void)
// entry 0x8091c00


undefined4 FUN_08091c00(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      local_10 = *(int *)(param_1 + 0x54);
      local_c = *(int *)(param_1 + 0x58) + 0xf00;
      FUN_080dcd68(&local_10,2,0);
      FUN_080dcd68(&local_10,2,1);
      FUN_0801cf00(param_1,DAT_08091c44);
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_10 = *(int *)(param_1 + 0x54);
        iVar1 = 0xf00;
      }
      else {
        local_10 = *(int *)(param_1 + 0x54);
        iVar1 = DAT_08091c58;
      }
      local_10 = local_10 + iVar1;
      local_c = *(int *)(param_1 + 0x58);
      FUN_080dcd68(&local_10,2,0);
      FUN_080dcd68(&local_10,2,1);
      FUN_0801cf00(param_1,DAT_08091cb4);
    }
    FUN_08002b10(0xe7);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


