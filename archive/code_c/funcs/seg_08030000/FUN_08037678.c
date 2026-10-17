// undefined FUN_08037678(void)
// entry 0x8037678


undefined4 FUN_08037678(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x14e) = 3;
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != 0x2300) {
    FUN_0801cf00(param_1,0x2300);
  }
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0803d374(param_1,3);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + DAT_080376ec) = 0;
      FUN_08036efc(param_1);
    }
    else if (*(char *)(param_1 + DAT_08037710) == '\0') {
      *(undefined1 *)(param_1 + DAT_08037714) = 2;
      *pcVar2 = '\0';
      FUN_08037718(param_1);
    }
  }
  return in_lr;
}


