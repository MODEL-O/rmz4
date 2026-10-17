// undefined FUN_08083adc(void)
// entry 0x8083adc


undefined4 FUN_08083adc(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = FUN_08007098(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08083b2c);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083b30);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\x01') {
LAB_08083b52:
    FUN_08084020(param_1);
    return in_lr;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc))) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (cVar1 == '\x01') goto LAB_08083b52;
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083b84);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080839a8(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xb4);
  if ((cVar1 != '\b') && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if (*piVar2 != 0) goto LAB_08083bba;
    iVar3 = FUN_0802adac(0,param_1,DAT_08083bd8);
    *piVar2 = iVar3;
    if (iVar3 == 0) goto LAB_08083be4;
    *(undefined1 *)(param_1 + 0xd) = 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*piVar2 == 0) {
LAB_08083be4:
    FUN_08005784(param_1 + 0x74,DAT_08083c2c);
    iVar3 = FUN_0807f90c(param_1);
    if (iVar3 != 0) {
      return in_lr;
    }
    if (((*(char *)(param_1 + 0xbf) == '\0') && (*(char *)(param_1 + 0xd) != '\0')) &&
       (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08083c30));
    FUN_0801cff0(param_1);
    return in_lr;
  }
LAB_08083bba:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08083bdc));
  FUN_08005784(param_1 + 0x74,DAT_08083be0);
  return in_lr;
}


