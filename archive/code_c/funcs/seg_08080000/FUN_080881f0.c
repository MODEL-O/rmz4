// undefined FUN_080881f0(void)
// entry 0x80881f0


undefined4 FUN_080881f0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_08088214);
    local_18 = DAT_08088278;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = 0x400;
    }
    local_18 = *(int *)(param_1 + 0x54) + local_18;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    local_10 = 0x200;
    local_c = 0;
    FUN_08088ff0(&local_18,&local_10,0,2);
    FUN_08005784(param_1 + 0x74,DAT_0808827c);
    FUN_0801cf00(param_1,DAT_08088280);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xb4) + -1;
    *(char *)(param_1 + 0xb4) = cVar1;
    if (cVar1 == '\0') {
      uVar2 = 4;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


