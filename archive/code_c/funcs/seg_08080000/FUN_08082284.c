// undefined FUN_08082284(void)
// entry 0x8082284


undefined4 FUN_08082284(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (cVar1 = FUN_08083890(param_1), cVar1 != '\0'))
  {
    cVar1 = *(char *)(param_1 + 0xd);
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      if (1 < (byte)(cVar1 - 1U)) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      cVar1 = '\x01';
    }
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080822ec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    *(char *)(param_1 + 0xf) = cVar1;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 3;
    }
    FUN_080824bc(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xb8);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0808238c:
      if (*piVar2 != 0) goto LAB_08082424;
    }
    else {
      iVar3 = FUN_0802adac(0,param_1,DAT_08082410);
      *piVar2 = iVar3;
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0xbf) = 1;
        FUN_08005784(param_1 + 0x74,DAT_08082414);
        *(undefined4 *)(param_1 + 0x60) = 0;
        FUN_0801cf00(param_1,0x1600);
        FUN_0801cff0(param_1);
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1800;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
        *(undefined1 *)(param_1 + 0x4d) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        goto LAB_0808238c;
      }
    }
    if (*(char *)(param_1 + 0xbf) == '\0') {
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        iVar3 = FUN_0807f90c(param_1);
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 0xf) = 1;
        }
        cVar1 = *(char *)(param_1 + 0xf);
        if (cVar1 == '\0') goto LAB_080823e0;
      }
      if (cVar1 == '\x01') {
        FUN_0801cff0(param_1);
        *(undefined1 *)(param_1 + 0xf) = 2;
      }
      iVar3 = FUN_0807f90c(param_1);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      if ((*(uint *)(param_1 + 0x8c) & DAT_08082418) != DAT_08082418) {
        return in_lr;
      }
    }
LAB_080823e0:
    if (*piVar2 == 0) {
      if (*(char *)(param_1 + 0xbf) == '\0') {
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808241c));
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08082420));
        return in_lr;
      }
      goto LAB_0808243c;
    }
  }
LAB_08082424:
  iVar3 = FUN_0802b3e4(*piVar2);
  if (iVar3 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080824b0);
    *piVar2 = 0;
  }
LAB_0808243c:
  iVar3 = FUN_0807f90c(param_1);
  if ((iVar3 == 0) && (pcVar5 = (char *)(param_1 + 0xbf), *pcVar5 != '\0')) {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = DAT_080824b8;
    iVar4 = FUN_08007db4(*(int *)(param_1 + 0x54) + DAT_080824b4,iVar4 + DAT_080824b8);
    if (iVar4 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *pcVar5 = '\0';
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    iVar3 = FUN_08007db4(*(int *)(param_1 + 0x54) + 0x700,*(int *)(param_1 + 0x58) + iVar3);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *pcVar5 = '\0';
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    }
  }
  return in_lr;
}


