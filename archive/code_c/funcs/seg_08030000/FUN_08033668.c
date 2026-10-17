// undefined FUN_08033668(void)
// entry 0x8033668


undefined4 FUN_08033668(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    FUN_0801cf00(param_1,DAT_08033680);
  }
  else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080336fc
          ) {
    FUN_0801cfc8(param_1,DAT_08033700,2,4);
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar2 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar2);
  }
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + 0x101) = 0;
    FUN_080334dc(param_1);
  }
  return in_lr;
}


