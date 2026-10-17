// undefined FUN_08034440(void)
// entry 0x8034440


undefined4 FUN_08034440(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != 0x1e00) {
    FUN_0801cf00(param_1,0x1e00);
  }
  *(undefined1 *)(param_1 + 0x14e) = 0;
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0803d374(param_1,0);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + DAT_080344b4) = 0;
      FUN_080334dc(param_1);
    }
    else if (*(char *)(param_1 + DAT_080344d8) == '\0') {
      *(undefined1 *)(param_1 + DAT_080344dc) = 2;
      *pcVar2 = '\0';
      FUN_080344e0(param_1);
    }
  }
  return in_lr;
}


