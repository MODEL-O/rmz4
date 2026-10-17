// undefined FUN_08079b10(void)
// entry 0x8079b10


undefined4 FUN_08079b10(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_08079b64) * 4
  ;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (*(char *)(DAT_08079b68 + DAT_08079b6c) == '\x02') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


