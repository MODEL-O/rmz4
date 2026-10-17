// undefined FUN_08091988(void)
// entry 0x8091988


undefined4 FUN_08091988(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080919e8);
    FUN_08002b10(0xe7);
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + DAT_080919ec;
    FUN_080dcd68(&local_10,2,0);
    FUN_080dcd68(&local_10,2,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


