// undefined FUN_080372e4(void)
// entry 0x80372e4


undefined4 FUN_080372e4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  bool bVar2;
  
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  bVar2 = cVar1 == '\x02';
  FUN_0801cf00(param_1,0x2900);
  if ((!bVar2) && (*(char *)(param_1 + DAT_08037354) == '\x03')) {
    bVar2 = true;
  }
  FUN_08040664(param_1,bVar2);
  *(undefined1 *)(param_1 + DAT_08037358) = 0xe;
  *(byte *)(param_1 + DAT_0803735c) = *(byte *)(param_1 + DAT_0803735c) & 0xf7;
  *(undefined1 *)(param_1 + DAT_08037360) = 1;
  FUN_08037364(param_1);
  return in_lr;
}


