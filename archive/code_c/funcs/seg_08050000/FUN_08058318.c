// undefined FUN_08058318(void)
// entry 0x8058318


undefined4 FUN_08058318(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08058398);
    iVar2 = FUN_0805977c(param_1);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(iVar2 + DAT_0805839c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_080583a4) * 4 + DAT_080583a0)) * 0x18 + DAT_080583a8);
  iVar2 = FUN_080597ac(param_1);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      FUN_08059548(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


