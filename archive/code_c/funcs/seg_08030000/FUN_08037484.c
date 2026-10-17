// undefined FUN_08037484(void)
// entry 0x8037484


undefined4 FUN_08037484(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_080374ec);
    *(undefined1 *)(param_1 + DAT_080374f0) = 4;
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_080374ec;
  FUN_0803a3b0(param_1,DAT_080374ec);
  FUN_0803a3f0(param_1,uVar1);
  cVar2 = *(char *)(param_1 + DAT_080374f0) + -1;
  *(char *)(param_1 + DAT_080374f0) = cVar2;
  if (cVar2 == -1) {
    FUN_0801cfc8(param_1,0x500,4,1);
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


