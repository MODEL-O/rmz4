// undefined FUN_08079a50(void)
// entry 0x8079a50


undefined4 FUN_08079a50(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801c560(1);
    FUN_0801cf00(param_1,0xb700);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x8c00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(DAT_08079a9c + DAT_08079aa0) == '\x01') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


