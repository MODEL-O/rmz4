// undefined FUN_0808784c(void)
// entry 0x808784c


undefined4 FUN_0808784c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  uint local_10;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 0) {
    FUN_08002b10(DAT_080878b4);
    local_14 = 0x800;
    local_10 = (uint)bVar1;
    FUN_08088ff0(param_1 + 0x54,&local_14,0,2);
    FUN_08005784(param_1 + 0x74,DAT_080878b8);
    FUN_0801cf00(param_1,DAT_080878bc);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar2 = *(char *)(param_1 + 0xb4) + -1;
    *(char *)(param_1 + 0xb4) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = 4;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


