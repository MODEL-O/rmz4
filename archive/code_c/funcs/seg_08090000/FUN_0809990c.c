// undefined FUN_0809990c(void)
// entry 0x809990c


undefined4 FUN_0809990c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0809993c);
    FUN_08002b10(DAT_08099940);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0) goto LAB_08099a48;
    FUN_0801cf00(param_1,DAT_080999e4);
    FUN_08005784(param_1 + 0x74,DAT_080999e8);
    iVar2 = DAT_080999f0;
    local_14 = *(int *)(param_1 + 0x54) + DAT_080999ec;
    local_10 = *(int *)(param_1 + 0x58) + DAT_080999f0;
    FUN_080c60d4(&local_14,0,0);
    local_14 = *(int *)(param_1 + 0x54) + 0x1000;
    local_10 = *(int *)(param_1 + 0x58) + iVar2;
    FUN_080c60d4(&local_14,0,1);
    FUN_08002b10(0x2d);
  }
  else if (bVar1 < 2) {
    if ((bVar1 != 0) || (*(char *)(param_1 + 0x73) != '\x03')) goto LAB_08099a48;
    FUN_0801cf00(param_1,DAT_0809997c);
    FUN_08005784(param_1 + 0x74,DAT_08099980);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x19;
  }
  else {
    if (bVar1 != 2) {
      if ((bVar1 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_08099a48;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    if (iVar2 <= *(int *)(param_1 + 0xb8)) goto LAB_08099a48;
    FUN_0801cf00(param_1,DAT_08099a30);
    FUN_08005784(param_1 + 0x74,DAT_08099a34);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08099a48:
  FUN_0801cff0(param_1);
  return in_lr;
}


