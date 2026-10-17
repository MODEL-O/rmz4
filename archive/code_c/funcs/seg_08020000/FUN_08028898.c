// undefined FUN_08028898(void)
// entry 0x8028898


undefined8 FUN_08028898(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 in_lr;
  
  puVar4 = DAT_080288d0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    if ((*(uint *)(param_1 + 0xd0) & 3) == 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    puVar4 = DAT_08028908;
    *DAT_08028908 = *(ushort *)(param_1 + 6) & 0xf;
    iVar3 = *(int *)(param_1 + 0xc);
    if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar3 + 4)) {
      uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
      if (uVar5 < 10) {
LAB_080289c0:
        iVar3 = (uint)*(ushort *)(*(short *)(iVar3 + 2) * 2 + DAT_080289e8) + DAT_080289ec;
        uVar2 = 0;
LAB_080289dc:
        FUN_0810d91c(iVar3,uVar2,(10 - uVar5) * 2,0,uVar5 + 1);
      }
      else {
LAB_080289f0:
        iVar3 = (uint)*(ushort *)(*(short *)(iVar3 + 2) * 2 + DAT_08028a20) + DAT_08028a24;
        uVar2 = 0;
LAB_08028a0e:
        FUN_0810d91c(iVar3,uVar2,0,uVar5 - 10 & 0xffff,uVar5 + 1);
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar2 = 1;
      goto LAB_08028a3a;
    }
LAB_08028a28:
    puVar4[-7] = (ushort)DAT_08028a44 & puVar4[-7];
    *puVar4 = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
          *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
        }
        puVar4 = DAT_0802895c;
        *DAT_0802895c = *(ushort *)(param_1 + 6) & 0xf;
        iVar3 = *(int *)(param_1 + 0xc);
        if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar3 + 4)) {
          uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
          if (9 < uVar5) {
            iVar3 = (uint)*(ushort *)(*(short *)(iVar3 + 2) * 2 + DAT_08028988) + DAT_0802898c;
            uVar2 = 6;
            goto LAB_08028a0e;
          }
          iVar3 = (uint)*(ushort *)(*(short *)(iVar3 + 2) * 2 + DAT_08028960) + DAT_08028964;
          uVar2 = 6;
          goto LAB_080289dc;
        }
      }
      else {
        if (bVar1 != 4) goto LAB_08028a38;
        if ((*(uint *)(param_1 + 0xd0) & 3) == 0) {
          *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
        }
        puVar4 = DAT_080289e4;
        *DAT_080289e4 = *(ushort *)(param_1 + 6) & 0xf;
        iVar3 = *(int *)(param_1 + 0xc);
        if ((uint)*(ushort *)(param_1 + 6) < *(uint *)(iVar3 + 4)) {
          uVar5 = (uint)(*(ushort *)(param_1 + 6) >> 4);
          if (9 < uVar5) goto LAB_080289f0;
          goto LAB_080289c0;
        }
      }
      goto LAB_08028a28;
    }
    if (bVar1 == 0) {
      *DAT_080288d0 = *DAT_080288d0 | 0x100;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined2 *)(param_1 + 6) = 0;
    }
  }
LAB_08028a38:
  uVar2 = 0;
LAB_08028a3a:
  return CONCAT44(in_lr,uVar2);
}


