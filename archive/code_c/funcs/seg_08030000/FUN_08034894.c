// undefined FUN_08034894(void)
// entry 0x8034894


undefined4 FUN_08034894(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_080348f4);
    *(undefined1 *)(param_1 + 0x152) = 4;
    *pcVar3 = *pcVar3 + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar2 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar2);
  }
  return in_lr;
}


