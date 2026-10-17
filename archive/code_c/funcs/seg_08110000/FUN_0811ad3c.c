// undefined FUN_0811ad3c(void)
// entry 0x811ad3c


undefined4 FUN_0811ad3c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  ushort local_24 [4];
  
  iVar4 = *(int *)(param_1 + DAT_0811ad60);
  if (*(char *)(iVar4 + 0xc4) == -1) {
    local_24[0] = 0x1d6;
  }
  else {
    local_24[0] = *(byte *)(iVar4 + 0xc4) + 400;
  }
  if (*(char *)(iVar4 + 0xc5) == -1) {
    local_24[1] = (ushort)DAT_0811ad84;
  }
  else {
    local_24[1] = *(byte *)(iVar4 + 0xc5) + 400;
  }
  if (*(char *)(iVar4 + 0xc6) == -1) {
    local_24[2] = 0x1d8;
  }
  else {
    local_24[2] = *(byte *)(iVar4 + 0xc6) + 400;
  }
  uVar5 = 0;
  do {
    iVar1 = DAT_0811ae1c;
    iVar4 = DAT_0811ae18;
    if ((*(byte *)(param_1 + 0xdd2) != 0xff) || (uVar5 == *(byte *)(param_1 + 0xdd0))) {
      FUN_0810d8b8((uint)*(ushort *)((uint)local_24[uVar5] * 2 + DAT_0811ae18) + DAT_0811ae1c,7,
                   uVar5 * 4 + 1,*(byte *)(param_1 + 0xdd2) >> 2);
      if (*(byte *)(param_1 + 0xdd2) < 0x40) {
        uVar2 = FUN_0810d7ec((uint)*(ushort *)((uint)local_24[uVar5] * 2 + iVar4) + iVar1);
        uVar2 = uVar2 & 0xff;
        uVar3 = (uint)(*(byte *)(param_1 + 0xdd2) >> 2);
        if (uVar2 <= uVar3) {
          if (10 < uVar2) goto LAB_0811ae42;
          uVar3 = uVar2;
          if (3 < (*(byte *)(param_1 + 0xdd2) & 7)) {
            uVar3 = 0;
          }
        }
        if (uVar3 != 0) {
          FUN_0810d85c((uint)*(ushort *)(DAT_0811ae60 + 0x14) + DAT_0811ae64,uVar3 + 7,uVar5 * 4 + 1
                      );
        }
      }
    }
LAB_0811ae42:
    uVar5 = uVar5 + 1 & 0xff;
    if (2 < uVar5) {
      return in_lr;
    }
  } while( true );
}


