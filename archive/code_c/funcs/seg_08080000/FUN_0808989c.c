// undefined FUN_0808989c(void)
// entry 0x808989c


undefined4 FUN_0808989c(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 8;
    local_14 = *(int *)(param_1 + 0x54) + *(int *)(uVar2 + DAT_0808992c);
    local_10 = *(int *)(param_1 + 0x58) + *(int *)(uVar2 + DAT_0808992c + 4);
    FUN_0801cf00(param_1,DAT_08089930 + (uint)*(byte *)(param_1 + 0xc0));
    FUN_080d0c88(2,&local_14);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(char *)(param_1 + 0x12) == '\0' ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))))
  {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


