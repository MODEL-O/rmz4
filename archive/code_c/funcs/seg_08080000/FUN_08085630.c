// undefined FUN_08085630(void)
// entry 0x8085630


undefined4 FUN_08085630(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar3 = FUN_0801fb14(DAT_08085680,param_1 + 0x54);
  if (0x8000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08085684);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    return in_lr;
  }
  cVar1 = FUN_0808549c(param_1);
  if (cVar1 != '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080856ac);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    *(undefined1 *)(param_1 + 0xd) = 2;
LAB_080856e2:
    FUN_08085798(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080856ec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    *(bool *)(param_1 + 0xd) = *(char *)(param_1 + 0xc3) != '\0';
    goto LAB_080856e2;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar5 = FUN_0807f90c(param_1);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    if (*(char *)(param_1 + 0xf) == '\0') goto LAB_08085766;
  }
  iVar5 = FUN_08008aa4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  if (iVar5 != 0) {
    FUN_08085418(param_1,iVar5,0);
  }
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  if (sVar2 != 0) {
    uVar6 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar6;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0xf) = 2;
  }
  iVar5 = FUN_0807f90c(param_1);
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & DAT_0808578c) != DAT_0808578c) {
    return in_lr;
  }
LAB_08085766:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08085790));
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08085794));
  return in_lr;
}


