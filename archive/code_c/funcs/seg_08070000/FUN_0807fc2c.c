// undefined FUN_0807fc2c(void)
// entry 0x807fc2c


undefined4 FUN_0807fc2c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      pcVar4 = (char *)(param_1 + 0xb9);
      cVar1 = *pcVar4;
      *pcVar4 = cVar1 + -1;
      if ((char)(cVar1 + -1) == -1) {
        *(undefined1 *)(param_1 + 0x11) = 1;
        *pcVar4 = '<';
      }
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar3 = FUN_0807f90c(param_1);
      if (iVar3 == 0) {
        piVar2 = (int *)(param_1 + 0xbc);
        if (*piVar2 == 0) {
          *(undefined1 *)(param_1 + 0xc1) = 0;
          FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807fd10));
          FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807fd14));
          if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
            iVar3 = FUN_0802adac(0,param_1,DAT_0807fd18);
            *piVar2 = iVar3;
            if (iVar3 != 0) {
              FUN_08005784(param_1 + 0x74,DAT_0807fd1c);
              *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
          }
        }
        else {
          iVar3 = FUN_0802b3e4();
          if (iVar3 != 0) {
            FUN_08005784(param_1 + 0x74,DAT_0807fd40);
            *piVar2 = 0;
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
    }
    else {
      iVar3 = FUN_0807f90c(param_1);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x03') {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807fc64);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_0807fd44(param_1);
  }
  return in_lr;
}


